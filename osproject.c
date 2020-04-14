#include<stdio.h>
int max=30;
void main(){
	int i,j,n,t,p[max],bt[max],at[max],tat[max],wt[max],temp[max];
	float awt=0,atat=0;
	printf("Enter the number of process\n");
	scanf("%d",&n);

	printf("Enter the process number\n");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}

	printf("enter the Burst time of the preocess\n");
	for(i=0;i<n;i++){
		scanf("%d",&bt[i]);
	}

	//sorting of process according to max  burts time
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(bt[j]<bt[j+1]){
				t=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=t;

				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	printf("According to the max burst time\n\n ");
	printf("process\t burst time\t waiting time\t Turn arount time\n");
	for(i=0;i<n;i++){
		wt[i]=0;
		tat[i]=0;
		for(j=0;j<i;j++){
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("average wating time= %f\n",awt);
	printf("average turnaround time = %f\n\n",atat);
	
	//sorting of process according to min burts time or sjf
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(bt[j]>bt[j+1]){
				t=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=t;

				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	printf("According to the min burst time or SJF\n\n ");
	printf("process\t burst time\t waiting time\t Turn arount time\n");
	for(i=0;i<n;i++){
		wt[i]=0;
		tat[i]=0;
		for(j=0;j<i;j++){
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("average wating time= %f\n",awt);
	printf("average turnaround time = %f\n",atat);
}




