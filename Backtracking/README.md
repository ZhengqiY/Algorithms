# Backtracking

"不断关注那些已被他人成功应用的新思路。你的原创思想只应该应用在那些你正在研究的问题上 ---- 托马斯•爱迪生"

Backtracking is aimed at solving problems consisting of many combinations.

Backtracking is based on building a space state tree. Each node reflects
the decision for each potential sub-solution

回溯法可以看作是对穷举查找的一个改进。但和穷举查找不同的是：每次只够造候选解的一个分量，
然后评估这个部分构造解：如果加上剩下的分量也不可能求得一个解，就绝对不会生成剩下的分量。

具体来说，每次只构造解的一个分量，然后按照下面的方法来评估这个部分构造解。如果一个
部分构造解可以进一步构造而不会违反问题的约束，我们就接受对解的下一个分量所做的第一个
合法选择。如果无法下一个分量进行合法的选择，就不必对剩下的任何分量再做任何选择了。
在这种情况下，该算法进行回溯，把部分构造解的最后一个分量替换为它的下一个选择。

通过所做的选择构造一棵所谓的**状态空间树**，树的根代表了查找之前的初始状态。树的第一层
节点代表了对解第一个分量所做的选择，第二层节点代表了对解第二个分量所做的选择，以此类推。
如果一个部分构造解仍然有可能导致一个完整解，我们说这个部分解在树中的相应节点是有希望的；
否则，是没希望的。叶子要么代表有完整解，要么代表没有解。大多数情况下，状态空间树是由DFP来构造的。
**例如**：如果当前节点是有希望的，通过部分解添加下一个分量的第一个合法选择，就生成了节点的一个子女，而处理也
会转向这个子女节点。如果当前节点没希望，该算法回溯到该节点的父母，考虑部分解的最后一个分量的下一个可能的选择。
如果这种选择不存在，它再回溯到树的上一层，以此类推。最后，如果找到了一个完整解，它要么就停止（只需要一个解），
要么继续查找其他可能的解。

经典问题：
- n皇后问题
- 哈密顿回路问题
- 子集和问题

**Alogirthm** Pseudo Code

    Backtrack(X[1..i])

      //给出通用回溯算法的一个模板
  
      //输入: X[1..i]确定了一个解的前面i个有希望的分量
  
     //输出：代表问题的解的所以元组
  
      if X[1..i] 是一个解 write X[1..i]
  
        else //
      
          for 和X[1..i]以及约束相容的每一个元素x in S do
          
             x[i+1] <---- x
              
              Backtrack(X[1..i+1])
              
 **Easier Understanding**
 
       Backtrack(data strucutre)
       
       Condition when find a solution
       
       Decision if it is possible to find a solution ----> Backtrack(data structure)
