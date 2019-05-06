#include<iostream>
using namespace std;


int EOJ_solution_3638(void){
	//思考：被完全覆盖，意味着不是从根节点出发的染色路径可以全部无视。
	//（因为终点在根节点，如果不从根节点出发绝对不可能完全覆盖。）
	//本质上是对染色路径进行分析，合适的算法是：
	//1.找到所有从根出发的染色路径，输入时候作判断即可实现
	//2.将所有上述路径的另一端的序号记为i，路径长度记为l[i]，该路径被覆盖的染色路径数目记为num[i]
	//	注：从i出发前往根节点的路径长度通过遍历算出（这一步需预先执行）
	//3.按照从i到1的路径长度进行分类，将所有节点按层次分类成s[0]={1},s[1]={a,b,c...},...
	//对于任意2条路径，如果i是j的祖先，则将该两条路径归并为一条，从辅助存储空间中剔除j相关信息，而i的覆盖数num[i]++
	return 0;
}