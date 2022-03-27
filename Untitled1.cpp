#include<iostream>
#include<iomanip>
using namespace std;
    struct ngay_sinh
			    {
			    int ngay,thang,nam;
			    };
    class khach_hang
{
	    private:
	    	char ho_ten[30];    
			char chung_minh_thu[10],ho_khau[50];
		public:
		    void nhap(ngay_sinh ns[] , int &n)
		    {   
		        do
		        {
		        	
		        cout<<"\t\t==>NHAP VAO SO LUONG KHACH HANG: ";
		        cin>>n;
		        if (n<0)
		        {
		        	cout<<"\t\t==>NHAP LAI SO KHACH HANG!!";
				}
				}while(n<0);
		    	for(int i=0;i<n;i++)
		    	{
		    		fflush(stdin);
		    		cout<<"\t\t==>NHAP VAO THONG TIN KHACH HANG THU: "<< i+1 <<endl;
		    		cout<<"\t\t==>NHAP VAO HO TEN KHAC HANG: ";
		    		cin.getline(ho_ten,30);
		    		cout<<"\t\t==>NHAP VAO NGAY THANG NAM SINH CUA KHAC HANG!!! "<<endl;
		    		cout<<"\t==>NHAP VAO NGAY  SINH CUA KHAC HANG: ";
		    		cin>>ns[i].ngay;
		    		cout<<"\t==>NHAP VAO THANG SINH KHAC HANG: ";
		    		cin>>ns[i].thang;
		    		cout<<"\t==>NHAP VAO NAM SINH KHAC HANG: ";
		    		cin>>ns[i].nam;
		    		fflush(stdin);
		    		cout<<"\t\t==>NHAP VAO CHUNG MINH THU KHAC HANG: ";
		    		cin.getline(chung_minh_thu,10);
		    		cout<<"\t\t==>NHAP VAO HO KHAU KHAC HANG: ";
		    		cin.getline(ho_khau,50);
		    		cout<<"\+======================================================================+\n";
		    		cout<<"                                                                         \n";
				}
			}
			void tieude()
			{
					cout <<"+---------------------------------------------------------------------------------------+"<<endl; 
	                cout <<"|"<<setw(10)<<"HO TEN"<<setw(5)
	                     <<"|"<<setw(15)<<"NGAY SINH"<<setw(7)
		                 <<"|"<<setw(20)<<"CHUNG MINH THU"<<setw(7)
		                 <<"|"<<setw(15)<<"HO KHAU"<<setw(9)
		                 <<"|"<<endl;
	                cout <<"+---------------------------------------------------------------------------------------+"<<endl;
			}
			void xuat(ngay_sinh ns[], int n)
			{
				    
				    for(int i=0;i<n;i++)
				{
                        xuat1(ns[i]);
                        i++;
				}	
			}
			void xuat1(ngay_sinh ns)
			{
				   

	                cout <<"|"<<setw(10)<<ho_ten<<setw(5)
	                     <<"|"<<setw(10)<<ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<setw(5)
		                 <<"|"<<setw(20)<<chung_minh_thu<<setw(7)
		                 <<"|"<<setw(15)<<ho_khau<<setw(9)
		                 <<"|"<<endl;
	                cout <<"+---------------------------------------------------------------------------------------+"<<endl;
			}
};
    int main()
{   
    int n;
    khach_hang kh;
    ngay_sinh ns[100];
	kh.nhap(ns,n);
	kh.tieude();
	kh.xuat(ns,n);
}
