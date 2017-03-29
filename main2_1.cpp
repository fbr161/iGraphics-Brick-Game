#include "iGraphics.h"

//int fc

int ds=35,rct=150,frct=100,r_f=25;
//big 
int bgx=1500,bgy=0,bds=150;
int  bggx=2,bggy=0, bgdx=1,bgdy=0, bgex=1,bgey=1, bgbx=0,bgby=1, bgfx=1,bgfy=2, bgix=2,bgiy=2;

//little
int ltx=420,lty=155,ltds=35,ltclr=128,ltc=0;
int ltgx=0,ltgy=-6, ltdx=-13,ltdy=1, ltex=1,ltey=1, ltbx=1,ltby=9, ltfx=17,ltfy=1, ltix=2,ltiy=-6;

//edit intfc page
int intfcedt=0;

//intrfc

int inx=135,iny=125,inds=35,inclr=128,inc=0;
int ingx=0,ingy=-6, indx=-13,indy=1, inex=1,iney=1, inbx=1,inby=9, infx=17,infy=1, inix=2,iniy=-6;
int inrct=66,infrct=44,inr_f=11,indss=72,inrctbld=4;


int tm=150;
int r=0,g=0,b=0;
int ld=0,istp=-1,icnt=0;
int istp7h=0,istp7x=450,istp7y=0,istp7b=450;

int plx=600, ply=120, plclr=0, abclr=0, hlclr=0;



//for xprmnt

int msx,msy;


// circle

int clcx=240,clcy=223,clcr=169,clcb=18;

//up down anmtn for trnsfr frm one page to anthr

int upanmtny=15,dwnanmtny=435,udcnt=0,mtchdan=0;
int upanmtny1=15,dwnanmtny1=15;

//game ply 

int x=15+9*35;
int y=155;

int chck;
//,t2,t3,t4;
time_t t;

	

int hrec=0;

int gx=0,gy=0, dx=0,dy=1, ex=1,ey=1, bx=1,by=2, fx=2,fy=1, ix=2,iy=0;

int gulix1=999,guliyu1=999,guliyd1=-999;				//guli y axis
int gulix2=999,guliyu2=999,guliyd2=-999;

int gulixr1=999,gulixl1=-999,guliyrl1=999;				//guli x axis
int gulixr2=999,gulixl2=-999,guliyrl2=999;
int gulixr3=999,gulixl3=-999,guliyrl3=999;

int blst=0,blstchng=0,blstcnt=0,blsttmr=0;
int blstanmtnup=0,blstanmtndwn=0;

//vlln 1

int v1x=-999,v1y=15;
int v1gx=0,v1gy=2, v1dx=0,v1dy=1, v1ex=1,v1ey=1, v1bx=1,v1by=0, v1fx=2,v1fy=1, v1ix=2,v1iy=2;

int v1gulix1=999,v1guliyu1=999,v1guliyd1=-999;				//guli y axis
int v1gulix2=999,v1guliyu2=999,v1guliyd2=-999;

int v1gulixr1=999,v1gulixl1=-999,v1guliyrl1=999;			//guli x axis
int v1gulixr2=999,v1gulixl2=-999,v1guliyrl2=999;
int v1gulixr3=999,v1gulixl3=-999,v1guliyrl3=999;

int v1gulix=9999,v1guliy=9999,v1guliyd=9999,v1gulicnt=0,v1gulips=0;

int v1ld=0;

int v6x=15, v6y=15;

//vlln 2

int v2x=-999, v2y=330;
int v2gx=0,v2gy=0, v2dx=0,v2dy=1, v2ex=1,v2ey=1, v2bx=1,v2by=2, v2fx=2,v2fy=1, v2ix=2,v2iy=0;

int v2gulix1=999,v2guliyu1=999,v2guliyd1=-999;				//guli y axis
int v2gulix2=999,v2guliyu2=999,v2guliyd2=-999;

int v2gulixr1=999,v2gulixl1=-999,v2guliyrl1=999;			//guli x axis
int v2gulixr2=999,v2gulixl2=-999,v2guliyrl2=999;
int v2gulixr3=999,v2gulixl3=-999,v2guliyrl3=999;


int v2gulix=9999,v2guliy=9999,v2guliyd=9999,v2gulicnt=0,v2gulips=0;


int v2ld=0;

//vlln 3

int v3x=-610, v3y=330;
int v3gx=0,v3gy=0, v3dx=0,v3dy=1, v3ex=1,v3ey=1, v3bx=1,v3by=2, v3fx=2,v3fy=1, v3ix=2,v3iy=0;

int v3gulix1=999,v3guliyu1=999,v3guliyd1=-999;				//guli y axis
int v3gulix2=999,v3guliyu2=999,v3guliyd2=-999;

int v3gulixr1=999,v3gulixl1=-999,v3guliyrl1=999;			//guli x axis
int v3gulixr2=999,v3gulixl2=-999,v3guliyrl2=999;
int v3gulixr3=999,v3gulixl3=-999,v3guliyrl3=999;


int v3gulix=9999,v3guliy=9999,v3guliyd,v3gulicnt=0,v3gulips=0;


int v3ld=0;

//vlln 4

int v4x=-610, v4y=15;
int v4gx=0,v4gy=0, v4dx=0,v4dy=1, v4ex=1,v4ey=1, v4bx=1,v4by=2, v4fx=2,v4fy=1, v4ix=2,v4iy=0;

int v4gulix1=999,v4guliyu1=999,v4guliyd1=-999;				//guli y axis
int v4gulix2=999,v4guliyu2=999,v4guliyd2=-999;

int v4gulixr1=999,v4gulixl1=-999,v4guliyrl1=999;			//guli x axis
int v4gulixr2=999,v4gulixl2=-999,v4guliyrl2=999;
int v4gulixr3=999,v4gulixl3=-999,v4guliyrl3=999;


int v4gulix=9999,v4guliy=9999,v4guliyd,v4gulicnt=0,v4gulips=0;


int v4ld=0;

//vlln 5

int v5x=-300, v5y=-600;
int v5gx=0,v5gy=0, v5dx=0,v5dy=1, v5ex=1,v5ey=1, v5bx=1,v5by=2, v5fx=2,v5fy=1, v5ix=2,v5iy=0;

int v5gulix1=999,v5guliyu1=999,v5guliyd1=-999;				//guli y axis
int v5gulix2=999,v5guliyu2=999,v5guliyd2=-999;

int v5gulixr1=999,v5gulixl1=-999,v5guliyrl1=999;			//guli x axis
int v5gulixr2=999,v5gulixl2=-999,v5guliyrl2=999;
int v5gulixr3=999,v5gulixl3=-999,v5guliyrl3=999;

//score, istp[9,10], game over

//score

int score=0, highscore,goal=0,life=3,lvl=1,sound=1,pause=0;
int scrx=0,scry=23,hiscrx=801,hiscry=266,glx,gly,lifex,lifey,sndx,sndy,psx,psy;

char sc[6],hsc[6];

//istp[9,10]

int backx,backy;

//game over

int gmovrupanmtn=15,gmovrdwnanmtn=435;
int gmovrx,gmovry;


//xprmntl fnctn

//x,y,r,bold show

void pointshw(int x, int y, int r, int b, int p)
{
	int i,j,k,l;
	char str[19];
	

	for(i=2,j=7,k=12,l=17; i>=0; i--,j--,k--,l--){
	
		str[i]=x%10+48;
		str[j]=y%10+48;
		x/=10;
		y/=10;
		str[k]=r%10+48;
		str[l]=b%10+48;
		r/=10;
		b/=10;

	}

	str[3]=',';
	str[4]=' ';
	str[8]=',';
	str[9]=' ';
	str[13]=',';
	str[14]=' ';
	str[18]=0;

	iSetColor(255,255,255);
	iText(p, 0, str,  GLUT_BITMAP_HELVETICA_12);

}

//bold rectangle
void bldrctng(int x, int y,int wd, int hg, int bld)
{
	int i;
	
	for(i=0; i<bld; i++){
	
		iRectangle(x+i,y+i,wd-2*i,hg-2*i);
	}
}

void bldcrcl(int x, int y, int r, int bld)
{
	int i;

	for(i=0; i<bld; i++){
	
		iCircle(x,y,r-i);
	}

}

void inp(int x, int y)
{
	//iSetColor(0,0,0);

	iRectangle(x,y,10,10);
	iFilledRectangle(x+2,y+3,5,5);


}


void loading(int x, int y)
{
	iSetColor(0,0,0);


	bldrctng(x,y,291,46,3);

	

	for(int i=0; i<ld; i+=35){

		iRectangle(x+8+i,y+8,30,30);
		iFilledRectangle(x+8+i+5,y+8+5,20,20);
	}
		


}


void pxl(int x, int y)
{
	iSetColor(137,151,117);
	iFilledRectangle(x,y,35,35);


	iSetColor(0,0,0);
	iRectangle(x,y,30,30);
	iFilledRectangle(x+5,y+5,20,20);

}

void upanmtn(int xlnth,int upanmtn)
{
	int ax, ay;

	for(ay=15; ay<upanmtn; ay+=35){

		for(ax=15; ax<15+35*xlnth; ax+=35)
			pxl(ax,ay);
	}


}


void dwnanmtn(int xlnth, int dwnanmtn)
{
	int ax, ay;

	

	iSetColor(0,0,0);

	for(ay=15; ay<dwnanmtn; ay+=35){

		for(ax=15; ax<15+35*xlnth; ax+=35)
			pxl(ax,ay);
		
	}


}


void gundaKarkhananew(int vx, int vy, int vgx, int vgy, int vdx, int vdy, int  vex, int vey, int vbx, int vby, int vfx, int vfy, int  vix, int viy, int irct, int ifrct, int ir_f, int dss, int bld)
{
	iSetColor(0,0,0);

	bldrctng(vx+vgx*dss,vy+vgy*dss,irct,irct,bld);
	iFilledRectangle(vx+vgx*dss+ir_f,vy+vgy*dss+ir_f,ifrct,ifrct);
	
	bldrctng(vx+vdx*dss,vy+vdy*dss,irct,irct, bld);
	iFilledRectangle(vx+vdx*dss+ir_f,vy+vdy*dss+ir_f,ifrct,ifrct);
	
	
	bldrctng(vx+vex*dss,vy+vey*dss,irct,irct, bld);
	iFilledRectangle(vx+vex*dss+ir_f,vy+vey*dss+ir_f,ifrct,ifrct);
	

	bldrctng(vx+vbx*dss,vy+vby*dss,irct,irct, bld);
	iFilledRectangle(vx+vbx*dss+ir_f,vy+vby*dss+ir_f,ifrct,ifrct);
	
	bldrctng(vx+vfx*dss,vy+vfy*dss,irct,irct, bld);
	iFilledRectangle(vx+vfx*dss+ir_f,vy+vfy*dss+ir_f,ifrct,ifrct);
	
	bldrctng(vx+vix*dss,vy+viy*dss,irct,irct, bld);
	iFilledRectangle(vx+vix*dss+ir_f,vy+viy*dss+ir_f,ifrct,ifrct);



}


void bg()
{
	iSetColor(137,151,117);
	iFilledRectangle(0,0,980,450);

}

void play(int x, int y)
{
	y+=179;
	//play
	iSetColor(plclr,plclr,plclr);

	inp(x,y);inp(x+10,y);inp(x+20,y);inp(x+30,y);
	inp(x,y-10);inp(x+30,y-10);
	inp(x,y-20);inp(x+10,y-20);inp(x+20,y-20);inp(x+30,y-20);
	inp(x,y-30);
	inp(x,y-40);
	
	inp(x+50,y);
	inp(x+50,y-10);
	inp(x+50,y-20);
	inp(x+50,y-30);
	inp(x+50,y-40);inp(x+50+10,y-40);inp(x+50+20,y-40);inp(x+50+30,y-40);
	
	inp(x+50+50,y);inp(x+50+50+10,y);inp(x+50+50+20,y);inp(x+50+50+30,y);
	inp(x+50+50,y-10);inp(x+50+50+30,y-10);
	inp(x+50+50,y-20);inp(x+50+50+10,y-20);inp(x+50+50+20,y-20);inp(x+50+50+30,y-20);
	inp(x+50+50,y-30);inp(x+50+50+30,y-30);
	inp(x+50+50,y-40);inp(x+50+50+30,y-40);

	inp(x+50+50+50,y);inp(x+50+50+50+40,y);
	inp(x+50+50+50,y-10);inp(x+50+50+50+40,y-10);
	inp(x+50+50+50,y-20);inp(x+50+50+50+10,y-20);inp(x+50+50+50+20,y-20);inp(x+50+50+50+30,y-20);inp(x+50+50+50+40,y-20);
	inp(x+50+50+50+20,y-30);
	inp(x+50+50+50+20,y-40);






	//about
	iSetColor(abclr,abclr,abclr);

	inp(x,y-70);inp(x+10,y-70);inp(x+20,y-70);inp(x+30,y-70);
	inp(x,y-70-10);inp(x+30,y-70-10);
	inp(x,y-70-20);inp(x+10,y-70-20);inp(x+20,y-70-20);inp(x+30,y-70-20);
	inp(x,y-70-30);inp(x+30,y-70-30);
	inp(x,y-70-40);inp(x+30,y-70-40);

	inp(x+50,y-70);inp(x+50+10,y-70);inp(x+50+20,y-70);
	inp(x+50,y-70-10);inp(x+50+30,y-70-10);
	inp(x+50,y-70-20);inp(x+50+10,y-70-20);inp(x+50+20,y-70-20);
	inp(x+50,y-70-30);inp(x+50+30,y-70-30);
	inp(x+50,y-70-40);inp(x+50+10,y-70-40);inp(x+50+20,y-70-40);

	inp(x+50+50,y-70);inp(x+50+50+10,y-70);inp(x+50+50+20,y-70);inp(x+50+50+30,y-70);
	inp(x+50+50,y-70-10);inp(x+50+50+30,y-70-10);
	inp(x+50+50,y-70-20);inp(x+50+50+30,y-70-20);
	inp(x+50+50,y-70-30);inp(x+50+50+30,y-70-30);
	inp(x+50+50,y-70-40);inp(x+50+50+10,y-70-40);inp(x+50+50+20,y-70-40);inp(x+50+50+30,y-70-40);

	inp(x+150,y-70);inp(x+150+30,y-70);
	inp(x+150,y-70-10);inp(x+150+30,y-70-10);
	inp(x+150,y-70-20);inp(x+150+30,y-70-20);
	inp(x+150,y-70-30);inp(x+150+30,y-70-30);
	inp(x+150,y-70-40);inp(x+150+10,y-70-40);inp(x+150+20,y-70-40);inp(x+150+30,y-70-40);

	inp(x+200,y-70);inp(x+200+10,y-70);inp(x+200+20,y-70);inp(x+200+30,y-70);
	inp(x+200+15,y-70-10);
	inp(x+200+15,y-70-20);
	inp(x+200+15,y-70-30);
	inp(x+200+15,y-70-40);




	//help
	iSetColor(hlclr,hlclr,hlclr);

	inp(x,y-140);inp(x+30,y-140);
	inp(x,y-140-10);inp(x+30,y-140-10);
	inp(x,y-140-20);inp(x+10,y-140-20);inp(x+20,y-140-20);inp(x+30,y-140-20);
	inp(x,y-140-30);inp(x+30,y-140-30);
	inp(x,y-140-40);inp(x+30,y-140-40);

	inp(x+50,y-140);inp(x+50+10,y-140);inp(x+50+20,y-140);inp(x+50+30,y-140);
	inp(x+50,y-140-10);
	inp(x+50,y-140-20);inp(x+50+10,y-140-20);inp(x+50+20,y-140-20);
	inp(x+50,y-140-30);
	inp(x+50,y-140-40);inp(x+50+10,y-140-40);inp(x+50+20,y-140-40);inp(x+50+30,y-140-40);

	inp(x+100,y-140);
	inp(x+100,y-140-10);
	inp(x+100,y-140-20);
	inp(x+100,y-140-30);
	inp(x+100,y-140-40);inp(x+100+10,y-140-40);inp(x+100+20,y-140-40);

	inp(x+140,y-140);inp(x+140+10,y-140);inp(x+140+20,y-140);inp(x+140+30,y-140);
	inp(x+140,y-140-10);inp(x+140+30,y-140-10);
	inp(x+140,y-140-20);inp(x+140+10,y-140-20);inp(x+140+20,y-140-20);inp(x+140+30,y-140-20);
	inp(x+140,y-140-30);
	inp(x+140,y-140-40);


}



void intrfccount()
{
	if(istp==-1){
	
		if(icnt<8)
			icnt++;
		else{
		
			icnt=0;
			istp++;
		}
	}

	else if(istp==0){
		
		if(ld<270)
			ld+=35;
		else if(icnt<5)
			icnt++;
		else{
			istp++;
			icnt=0;
			ld=0;
		}
	}

	else if(istp==1){
	
		if(bgx>-700)
			bgx-=150*3;
		else
			istp+=2;
	
	}

	else if(istp==2){
		
		if(ld<270)
			ld+=35;
		else if(icnt<5)
			icnt++;
		else{
			istp++;
			icnt=0;
			ld=0;
		}
	}
	
	//fblst

	if(istp==8 && blsttmr==1 && pause==0){

		if(blstchng==0)
			blstchng=1;
		else
			blstchng=0;

		if(blstcnt<8)
			blstcnt++;
		else{
			
			blstcnt=0;
			blstanmtnup=1;
			blsttmr=0;
		
		}

	}

}

void check()
{
	if(istp==3){
	
		/*if(ltclr>0)
			ltclr-=2;
		else
			istp++;*/

		if(ltc<10)
			ltc++;
		else
			istp++;
	}


	else if(istp==4){
	
		if(ltfx>2){
		
			ltfx--;
		
			if(ltfx==2)
				ltx-=35;
		}
	
		else if(ltdx<0){
		
			ltdx++;

			if(ltdx==0)
				ltx+=35;
		}

		else if(ltgy<0){
		
			ltgy++;
			ltiy++;

			if(ltgy==0)
				lty+=35;
		}	

		else if(ltby>2){

			ltby--;

			if(ltby==2){
				lty-=35;
				istp++;
			}
			
		}

	}

	else if(istp==5){

			if(icnt<4)
				icnt++;

			else if(icnt==4){
				ltx-=ltds;
				icnt++;
			}

			else if(icnt<8)
				icnt++;

			else if(icnt==8){
				ltx+=ltds;
				icnt++;
			}

			else if(icnt<12)
				icnt++;

			else if(icnt==12){
			
				ltgx=0,ltgy=2, ltdx=1,ltdy=2, ltex=1,ltey=1, ltbx=2,ltby=1, ltfx=1,ltfy=0, ltix=0,ltiy=0;
				icnt++;
			}

			else if(icnt<17)
				icnt++;

			else if(icnt==17){
			
				ltgx=0,ltgy=2, ltdx=0,ltdy=1, ltex=1,ltey=1, ltbx=1,ltby=0, ltfx=2,ltfy=1, ltix=2,ltiy=2;
				icnt++;
			}

			else if(icnt<22)
				icnt++;

			else if(icnt==22){
			
				ltgx=2,ltgy=0, ltdx=1,ltdy=0, ltex=1,ltey=1, ltbx=0,ltby=1, ltfx=1,ltfy=2, ltix=2,ltiy=2;
				icnt++;
			}

			else if(icnt<27)
				icnt++;

			else if(icnt==27){
			
				ltgx=0,ltgy=0, ltdx=0,ltdy=1, ltex=1,ltey=1, ltbx=1,ltby=2, ltfx=2,ltfy=1, ltix=2,ltiy=0;
				icnt++;
			}

			/*else if(icnt<31)
				icnt++;

			else if(icnt==31){
				ltx+=ltds;
				icnt++;
			}

			else if(icnt<35)
				icnt++;

			else if(icnt==35){
				ltx-=ltds;
				icnt++;
			}*/

			else if(icnt==28){
			
				ltfx++;
				ltby++;
				ltdx--;
				ltgy--;
				ltiy--;

				if(ltfx==17){
					icnt++;
					istp++;
				}

			}
		
		}

	else if(istp==6){
	
		if(ltc<525)
			ltc+=35;
		else{
			//PlaySound("plysnd",NULL, SND_ASYNC);
			istp++;
		}
	
	}

	else if(istp==7){
	

		if(istp7b>=0){
			
			istp7b-=30;
			istp7x-=30;
			istp7y-=30;
		}

		if(udcnt==1){ //udcnt= up down animation count
		
			if(upanmtny<435)
				upanmtny+=35;
			
			else{
			
				upanmtny=15;
				udcnt=0;
				istp=8;
			}
		}
	}
	else if(istp==8){
	
		if(dwnanmtny>15 && mtchdan==0)
			dwnanmtny-=35;
		else{
			mtchdan=1;	// mtchdan= match down animation
			
		}

		if(blstanmtnup==1 && pause==0){

			if(life==0){

				if(gmovrupanmtn<435)
					gmovrupanmtn+=35;
			
				else{
			
					gmovrupanmtn=15;
					
					istp=11;
					
				}

			}
			
			if(upanmtny1<435)
				upanmtny1+=35;
			
			else{
			
				upanmtny1=15;
				dwnanmtny1=435;
				blstanmtnup=2;

				x=-9999;
				v1x=-999;v2x=-999;v3x=-999;v4x=-444;
				v1guliy=9999;v2guliy=9999;v3guliy=9999;v4guliy=9999;
				
			}
			
		}

		if(blstanmtnup==2 && pause==0){

			if(dwnanmtny1>15)
				dwnanmtny1-=35;
			
			else{
			
				//dwnanmtny1=435;
				x=15+350;y=155;

				//if(life!=1)
					//life--;

				blstanmtnup=0;
				blst=0;
				
			}
			
		}
	
	}

	else if(istp==11){
	
		if(gmovrdwnanmtn>15)
			gmovrdwnanmtn-=35;
		life=3;
	
	}

	//f>d>g+i>b
	//int ltgx=0,ltgy=-6, ltdx=-13,ltdy=1, ltex=1,ltey=1, ltbx=1,ltby=9, ltfx=17,ltfy=1, ltix=2,ltiy=-6;
}



void iMouseMove(int mx, int my)
{
	if(!(mx>=plx && mx<=plx+200 && my>=ply+140 && my<=ply+140+50))
		plclr=0;
	//if(mx>=plx && mx<=plx+200 && my>=ply+140 && my<=ply+140+50)
	else
		plclr=90;

	if(!(mx>=plx && mx<=plx+240 && my>=ply+70 && my<=ply+70+50))
		abclr=0;
	//if(mx>=plx && mx<=plx+200 && my>=ply+140 && my<=ply+140+50)
	else
		abclr=90;

	if(!(mx>=plx && mx<=plx+180 && my>=ply && my<=ply+50))
		hlclr=0;
	//if(mx>=plx && mx<=plx+200 && my>=ply+140 && my<=ply+140+50)
	else
		hlclr=90;



}

void hrfire()
{
	
	
		if(x+ex*ds == x+bx*ds){

			if(y+by*ds > y+ey*ds){
			
				if(guliyu1>400 && guliyu2-(y+by*ds)>=5*ds){
					
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulix1=x+bx*ds;
					guliyu1=y+by*ds+ds;
				}
				else if(guliyu2>400 && guliyu1-(y+by*ds)>=5*ds){
				
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulix2=x+bx*ds;
					guliyu2=y+by*ds+ds;
				}
			
			}
			else{
			
				if(guliyd1<15 && (y+by*ds)-guliyd2>=5*ds){
				
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulix1=x+bx*ds;
					guliyd1=y+by*ds-ds;
				}
				else if(guliyd2<15 && (y+by*ds)-guliyd1>=5*ds){
				
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulix2=x+bx*ds;
					guliyd2=y+by*ds-ds;
				}
			}
		}

		else{
		
			if(x+bx*ds > x+ey*ds){
			
				if(gulixr1>680 && gulixr3-(x+bx*ds+ds)>=5*ds && gulixr2-(x+bx*ds+ds)>=10*ds){
					
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulixr1=x+bx*ds+ds;
					guliyrl1=y+by*ds;
				}

				else if((gulixr2>680) && gulixr1-(x+bx*ds+ds)>=5*ds && gulixr3-(x+bx*ds+ds)>=10*ds){
				
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulixr2=x+bx*ds+ds;
					guliyrl2=y+by*ds;
				}

				else if((gulixr3>680) && gulixr2-(x+bx*ds+ds)>=5*ds && gulixr1-(x+bx*ds+ds)>=10*ds){
				
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulixr3=x+bx*ds+ds;
					guliyrl3=y+by*ds;
				}
			}

			else{
			
				if(gulixl1<15 && (x+bx*ds-ds)-gulixl3>=5*ds && (x+bx*ds-ds)-gulixl2>=10*ds){
					
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulixl1=x+bx*ds-ds;
					guliyrl1=y+by*ds;
				}

				else if(gulixl2<15 && (x+bx*ds-ds)-gulixl1>=5*ds && (x+bx*ds-ds)-gulixl3>=10*ds){
				
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulixl2=x+bx*ds-ds;
					guliyrl2=y+by*ds;
				}

				else if(gulixl3<15 && (x+bx*ds-ds)-gulixl2>=5*ds && (x+bx*ds-ds)-gulixl1>=10*ds){
				
					//PlaySound("snd\\fire",NULL, SND_ASYNC);
					gulixl3=x+bx*ds-ds;
					guliyrl3=y+by*ds;
				}
				
				
				
			}
		}


}

void iMouse(int button, int state, int mx, int my)
{
	if(istp==7){
	
		if(button == GLUT_LEFT_BUTTON && state == GLUT_UP){
		
			if(mx>=plx && mx<=plx+200 && my>=ply+140 && my<=ply+140+50){
				
				//istp++;
				plclr=0;
				udcnt=1;

			}
			else if(mx>=plx && mx<=plx+240 && my>=ply+70 && my<=ply+70+50){
				
				istp=9;
				abclr=0;
				//udcnt=1;

			}
			else if(mx>=plx && mx<=plx+180 && my>=ply && my<=ply+50){
				
				istp=10;
				hlclr=0;
				//udcnt=1;

			}
		
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=plx && mx<=plx+200 && my>=ply+140 && my<=ply+140+50)
			plclr=90;
		else if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=plx && mx<=plx+240 && my>=ply+70 && my<=ply+70+50)
			abclr=90;
		else if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=plx && mx<=plx+180 && my>=ply && my<=ply+50)
			hlclr=90;
		
	
	
	}

	else if(istp==8){
	
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=15 && mx<=15+35*20 && my>=15 && my<=15+12*35 && blst==0)
				hrfire();
			
		else if(button == GLUT_LEFT_BUTTON && state == GLUT_UP && mx>=783 && mx<=783+37 && my>=33 && my<=33+27){
				
			istp=7;
			dwnanmtny=435;
			mtchdan=0;

			x=15+8*ds;
			y=4*ds+15;
			gx=0;gy=0; dx=0;dy=1; ex=1;ey=1; bx=1;by=2; fx=2;fy=1; ix=2;iy=0;
			
			score=0;
			v1x=-9999;v2x=-9999;v3x=-9999;v4x=-9999;


		}

		
	}

	else if(istp==9){
	
		if(button == GLUT_LEFT_BUTTON && state == GLUT_UP && mx>=62 && mx<=62+59 && my>=60 && my<=30+60)
			
			istp=7;
	
	}

	else if(istp==10){
	
		if(button == GLUT_LEFT_BUTTON && state == GLUT_UP && mx>=62 && mx<=62+59 && my>=60 && my<=30+60)
			
			istp=7;
	
	}

	else if(istp==11){
	
		if(button == GLUT_LEFT_BUTTON && state == GLUT_UP && mx>=62 && mx<=62+59 && my>=60 && my<=30+60){
			
			istp=7;
			gmovrdwnanmtn=435;
			score=0;
			v1x=-9999;v2x=-9999;v3x=-9999;v4x=-9999;
			dwnanmtny=435;
			mtchdan=0;

		}

	
	}
}


void iKeyboard(unsigned char key)
{
	/*if(key == 'a')
		blst=0;
	else if(key == 'q'){
		blst=1;
		blsttmr=1;
	}*/
	if(key == 'x')
		scrx++;
	else if(key == 'z')
		scrx--;
	else if(key == 'y')
		scry++;
	else if(key == 'h')
		scry--;

	if(key == 'X')
		hiscrx++;
	else if(key == 'Z')
		hiscrx--;
	else if(key == 'Y')
		hiscry++;
	else if(key == 'H')
		hiscry--;






	if(istp==7 && key == 'Q'){
	
		if(intfcedt==0)
			intfcedt=1;
		else
			intfcedt=0;
	
	}

	//
	if(istp==7 && intfcedt==1){
	
		if(key == 'x')
			clcx++;
		if(key=='z')
			clcx--;

		if(key == 'y')
			clcy++;
		if(key=='h')
			clcy--;

		if(key == 'r')
			clcr++;
		if(key=='e')
			clcr--;

		if(key == 'b')
			clcb++;
		if(key=='v')
			clcb--;


		if(key == 'X')
			inx++;
		if(key=='Z')
			inx--;

		if(key == 'Y')
			iny++;
		if(key=='H')
			iny--;

		if(key == 'R')
			inrct++;
		if(key=='E')
			inrct--;

		if(key == 'F')
			infrct++;
		if(key=='D')
			infrct--;

		if(key == 'M')
			inr_f++;
		if(key=='N')
			inr_f--;

		if(key == 'L')
			indss++;
		if(key=='K')
			indss--;

		if(key == 'B')
			inrctbld++;
		if(key=='V')
			inrctbld--;
	}


}



void nyksguli()
{

	if(hrec==0) //hero x+ex*ds color
		hrec=75;
	else
		hrec=0;

	//guli y axis U

	if(guliyu1<400)
		guliyu1+=ds;
	else
		guliyu1=999;

	if(guliyu2<400)
		guliyu2+=ds;
	else
		guliyu2=999;
		
	//guli y axis D

	if(guliyd1>15)
		guliyd1-=ds;
	else
		guliyd1=-999;

	if(guliyd2>15)
		guliyd2-=ds;
	else
		guliyd2=-999;


	//guli x axis R

	if(gulixr1<680)
		gulixr1+=35;
	else
		gulixr1=999;

	if(gulixr2<680)
		gulixr2+=35;
	else
		gulixr2=999;

	if(gulixr3<680)
		gulixr3+=35;
	else
		gulixr3=999;

	//guli x axis L

	if(gulixl1>15)
		gulixl1-=35;
	else
		gulixl1=-999;

	if(gulixl2>15)
		gulixl2-=35;
	else
		gulixl2=-999;

	if(gulixl3>15)
		gulixl3-=35;
	else
		gulixl3=-999;

}


void gndmv1()
{

	srand(time(NULL));

	if(istp==8 && mtchdan==1 && blst==0 && pause==0){
	
		if(v1x>=15){

	
			int v1r=rand()%4+1;

			if(v1r==1){
	
				if(v1gx==0 && v1gy==0 && v1dx==0 && v1dy==1 && v1ex==1 && v1ey==1 && v1bx==1 && v1by==2 && v1fx==2 && v1fy==1 && v1ix==2 && v1iy==0){
			
					//if(v1y!=330)
					if(!((x-3*ds<v1x && v1x<x+3*ds) && v1y+3*ds==y) && !((v2x-3*ds<v1x && v1x<v2x+3*ds) && v1y+3*ds==v2y) && !((v3x-3*ds<v1x && v1x<v3x+3*ds) && v1y+3*ds==v3y) && !((v4x-3*ds<v1x && v1x<v4x+3*ds) && v1y+3*ds==v4y) && !((v5x-3*ds<v1x && v1x<v5x+3*ds) && v1y+3*ds==v5y) && v1y!=330)
						v1y+=ds;
				}

				else{
					v1gx=0;v1gy=0; v1dx=0;v1dy=1; v1ex=1;v1ey=1; v1bx=1;v1by=2; v1fx=2;v1fy=1; v1ix=2;v1iy=0;
				}
	
			}

			else if(v1r==2){
	
				if(v1gx==0 && v1gy==2 && v1dx==1 && v1dy==2 && v1ex==1 && v1ey==1 && v1bx==2 && v1by==1 && v1fx==1 && v1fy==0 && v1ix==0 && v1iy==0){
			
					//if(v1x!=610)
					if(!((y-3*ds<v1y && v1y<y+3*ds) && v1x+3*ds==x) && !((v2y-3*ds<v1y && v1y<v2y+3*ds) && v1x+3*ds==v2x) && !((v3y-3*ds<v1y && v1y<v3y+3*ds) && v1x+3*ds==v3x) && !((v4y-3*ds<v1y && v1y<v4y+3*ds) && v1x+3*ds==v4x) && !((v5y-3*ds<v1y && v1y<v5y+3*ds) && v1x+3*ds==v5x) && v1x!=610)
						v1x+=ds;
				}

				else{
					v1gx=0;v1gy=2; v1dx=1;v1dy=2; v1ex=1;v1ey=1; v1bx=2;v1by=1; v1fx=1;v1fy=0; v1ix=0;v1iy=0;
				}
	
			}

			else if(v1r==3){
	
				if(v1gx==0 && v1gy==2 && v1dx==0 && v1dy==1 && v1ex==1 && v1ey==1 && v1bx==1 && v1by==0 && v1fx==2 && v1fy==1 && v1ix==2 && v1iy==2){
			
					//if(v1y!=15)
					if(!((x-3*ds<v1x && v1x<x+3*ds) && v1y-3*ds==y) && !((v2x-3*ds<v1x && v1x<v2x+3*ds) && v1y-3*ds==v2y) && !((v3x-3*ds<v1x && v1x<v3x+3*ds) && v1y-3*ds==v3y) && !((v4x-3*ds<v1x && v1x<v4x+3*ds) && v1y-3*ds==v4y) && !((v5x-3*ds<v1x && v1x<v5x+3*ds) && v1y-3*ds==v5y) && v1y!=15)
						v1y-=ds;
				}

				else{
					v1gx=0;v1gy=2; v1dx=0;v1dy=1; v1ex=1;v1ey=1; v1bx=1;v1by=0; v1fx=2;v1fy=1; v1ix=2;v1iy=2;
				}
	
			}

			else if(v1r==4){
	
				if(v1gx==2 && v1gy==0 && v1dx==1 && v1dy==0 && v1ex==1 && v1ey==1 && v1bx==0 && v1by==1 && v1fx==1 && v1fy==2 && v1ix==2 && v1iy==2){
			
					//if(v1x!=15)
					if(!((y-3*ds<v1y && v1y<y+3*ds) && v1x-3*ds==x) && !((v2y-3*ds<v1y && v1y<v2y+3*ds) && v1x-3*ds==v2x) && !((v3y-3*ds<v1y && v1y<v3y+3*ds) && v1x-3*ds==v3x) && !((v4y-3*ds<v1y && v1y<v4y+3*ds) && v1x-3*ds==v4x) && !((v5y-3*ds<v1y && v1y<v5y+3*ds) && v1x-3*ds==v5x) && v1x!=15)
						v1x-=ds;
				}

				else{
					v1gx=2;v1gy=0; v1dx=1;v1dy=0; v1ex=1;v1ey=1; v1bx=0;v1by=1; v1fx=1;v1fy=2; v1ix=2;v1iy=2;
				}
		
			}
			//guli

			if(v1gulicnt<8)
				v1gulicnt++;

			else{
			
				if(v1x+v1bx*ds == v1x+v1ex*ds){
				
					if(v1y+v1by*ds>v1y+v1ey*ds){
					
						v1gulix=v1x+v1bx*ds;
						v1guliy=v1y+v1by*ds;
						v1gulips=1;
						v1gulicnt=0;
					
					}
					else{
					
						v1gulix=v1x+v1bx*ds;
						v1guliy=v1y+v1by*ds;
						v1gulips=3;
						v1gulicnt=0;
					
					}
				
				}

				else if(v1y+v1by*ds == v1y+v1ey*ds){
				
					if(v1x+v1bx*ds>v1x+v1ex*ds){
					
						v1gulix=v1x+v1bx*ds;
						v1guliy=v1y+v1by*ds;
						v1gulips=2;
						v1gulicnt=0;
					
					}
					else{
					
						v1gulix=v1x+v1bx*ds;
						v1guliy=v1y+v1by*ds;
						v1gulips=4;
						v1gulicnt=0;
					
					}
				
				}
		
			}


			//
		}

		else{
	
			if(v1ld<5)
				v1ld++;
			else{
				
				int n=2;
		
					int psn=rand()%6+1;

					
					if(psn==1 && !((x>=15 && x<=85) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x>=15 && v2x<=85) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v3x>=15 && v3x<=85) && (v3y+n*ds>=330 && v3y+n*35<=400)) && !((v4x>=15 && v4x<=85) && (v4y+n*ds>=330 && v4y+n*35<=400))){

						v1x=15;v1y=330;
						v1ld=0;
						
						
					}
					else if(psn==2 && !((x+n*ds>=295 && x<=365) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x+n*ds>=295 && v2x<=365) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v3x+n*ds>=295 && v3x<=365) && (v3y+n*ds>=330 && v3y+n*35<=400)) && !((v4x+n*ds>=295 && v4x<=365) && (v4y+n*ds>=330 && v4y+n*35<=400))){
						
						v1x=295;v1y=330;
						v1ld=0;
						
					}
					else if(psn==3 && !((x+n*ds>=610 && x<=680) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x+n*ds>=610 && v2x<=680) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v3x+n*ds>=610 && v3x<=680) && (v3y+n*ds>=330 && v3y+n*35<=400)) && !((v4x+n*ds>=610 && v4x<=680) && (v4y+n*ds>=330 && v4y+n*35<=400))){
						
						v1x=610;v1y=330;
						v1ld=0;
						
					}
					else if(psn==4 && !((x+n*ds>=610 && x<=680) && (y>=15 && y<=85)) && !((v2x+n*ds>=610 && v2x<=680) && (v2y>=15 && v2y<=85)) && !((v3x+n*ds>=610 && v3x<=680) && (v3y>=15 && v3y<=85)) && !((v4x+n*ds>=610 && v4x<=680) && (v4y>=15 && v4y<=85))){

						v1x=610;v1y=15;
						v1ld=0;
						
					}
					else if(psn==5 && !((x+n*ds>=295 && x<=365) && (y>=15 && y<=85)) && !((v2x+n*ds>=295 && v2x<=365) && (v2y>=15 && v2y<=85)) && !((v3x+n*ds>=295 && v3x<=365) && (v3y>=15 && v3y<=85)) && !((v4x+n*ds>=295 && v4x<=365) && (v4y>=15 && v4y<=85))){

						v1x=295;v1y=15;
						v1ld=0;
						
					}
					else if(psn==6 && !((x>=15 && x<=85) && (y>=15 && y<=85)) && !((v2x>=15 && v2x<=85) && (v2y>=15 && v2y<=85)) && !((v3x>=15 && v3x<=85) && (v3y>=15 && v3y<=85)) && !((v4x>=15 && v4x<=85) && (v4y>=15 && v4y<=85))){
						
						v1x=15;v1y=15;
						v1ld=0;
						
					}
			

			}
	
		}
	}

}



void gndmv2()
{

	// v2
	//time_t t2;
	//srand(time(NULL));
	
	if(istp==8 && mtchdan==1 && blst==0 && pause==0){

		if(v2x>=15){
			
			int v2r=rand()%4+1;

			if(v2r==1){
	
				if(v2gx==0 && v2gy==0 && v2dx==0 && v2dy==1 && v2ex==1 && v2ey==1 && v2bx==1 && v2by==2 && v2fx==2 && v2fy==1 && v2ix==2 && v2iy==0){
			
					//if(v2y!=330)
					if(!((x-3*ds<v2x && v2x<x+3*ds) && v2y+3*ds==y) && !((v1x-3*ds<v2x && v2x<v1x+3*ds) && v2y+3*ds==v1y) && !((v3x-3*ds<v2x && v2x<v3x+3*ds) && v2y+3*ds==v3y) && !((v4x-3*ds<v2x && v2x<v4x+3*ds) && v2y+3*ds==v4y) && !((v5x-3*ds<v2x && v2x<v5x+3*ds) && v2y+3*ds==v5y) && v2y!=330)
						v2y+=ds;
				}

				else{
					v2gx=0;v2gy=0; v2dx=0;v2dy=1; v2ex=1;v2ey=1; v2bx=1;v2by=2; v2fx=2;v2fy=1; v2ix=2;v2iy=0;
				}
	
			}

			else if(v2r==2){
	
				if(v2gx==0 && v2gy==2 && v2dx==1 && v2dy==2 && v2ex==1 && v2ey==1 && v2bx==2 && v2by==1 && v2fx==1 && v2fy==0 && v2ix==0 && v2iy==0){
			
					//if(v2x!=610)
					if(!((y-3*ds<v2y && v2y<y+3*ds) && v2x+3*ds==x) && !((v1y-3*ds<v2y && v2y<v1y+3*ds) && v2x+3*ds==v1x) && !((v3y-3*ds<v2y && v2y<v3y+3*ds) && v2x+3*ds==v3x) && !((v4y-3*ds<v2y && v2y<v4y+3*ds) && v2x+3*ds==v4x) && !((v5y-3*ds<v2y && v2y<v5y+3*ds) && v2x+3*ds==v5x) && v2x!=610)
						v2x+=ds;
				}

				else{
					v2gx=0;v2gy=2; v2dx=1;v2dy=2; v2ex=1;v2ey=1; v2bx=2;v2by=1; v2fx=1;v2fy=0; v2ix=0;v2iy=0;
				}
	
			}

			else if(v2r==3){
	
				if(v2gx==0 && v2gy==2 && v2dx==0 && v2dy==1 && v2ex==1 && v2ey==1 && v2bx==1 && v2by==0 && v2fx==2 && v2fy==1 && v2ix==2 && v2iy==2){
			
					//if(v2y!=15)
					if(!((x-3*ds<v2x && v2x<x+3*ds) && v2y-3*ds==y) && !((v1x-3*ds<v2x && v2x<v1x+3*ds) && v2y-3*ds==v1y) && !((v3x-3*ds<v2x && v2x<v3x+3*ds) && v2y-3*ds==v3y) && !((v4x-3*ds<v2x && v2x<v4x+3*ds) && v2y-3*ds==v4y) && !((v5x-3*ds<v2x && v2x<v5x+3*ds) && v2y-3*ds==v5y) && v2y!=15)
						v2y-=ds;
				}

				else{
					v2gx=0;v2gy=2; v2dx=0;v2dy=1; v2ex=1;v2ey=1; v2bx=1;v2by=0; v2fx=2;v2fy=1; v2ix=2;v2iy=2;
				}
	
			}

			else if(v2r==4){
	
				if(v2gx==2 && v2gy==0 && v2dx==1 && v2dy==0 && v2ex==1 && v2ey==1 && v2bx==0 && v2by==1 && v2fx==1 && v2fy==2 && v2ix==2 && v2iy==2){
			
					//if(v2x!=15)
					if(!((y-3*ds<v2y && v2y<y+3*ds) && v2x-3*ds==x) && !((v1y-3*ds<v2y && v2y<v1y+3*ds) && v2x-3*ds==v1x) && !((v3y-3*ds<v2y && v2y<v3y+3*ds) && v2x-3*ds==v3x) && !((v4y-3*ds<v2y && v2y<v4y+3*ds) && v2x-3*ds==v4x) && !((v5y-3*ds<v2y && v2y<v5y+3*ds) && v2x-3*ds==v5x) && v2x!=15)
						v2x-=ds;
				}

				else{
					v2gx=2;v2gy=0; v2dx=1;v2dy=0; v2ex=1;v2ey=1; v2bx=0;v2by=1; v2fx=1;v2fy=2; v2ix=2;v2iy=2;
				}
	
	
			}
			//guli

			if(v2gulicnt<8)
				v2gulicnt++;

			else{
			
				if(v2x+v2bx*ds == v2x+v2ex*ds){
				
					if(v2y+v2by*ds>v2y+v2ey*ds){
					
						v2gulix=v2x+v2bx*ds;
						v2guliy=v2y+v2by*ds;
						v2gulips=1;
						v2gulicnt=0;
					
					}
					else{
					
						v2gulix=v2x+v2bx*ds;
						v2guliy=v2y+v2by*ds;
						v2gulips=3;
						v2gulicnt=0;
					
					}
				
				}

				else if(v2y+v2by*ds == v2y+v2ey*ds){
				
					if(v2x+v2bx*ds>v2x+v2ex*ds){
					
						v2gulix=v2x+v2bx*ds;
						v2guliy=v2y+v2by*ds;
						v2gulips=2;
						v2gulicnt=0;
					
					}
					else{
					
						v2gulix=v2x+v2bx*ds;
						v2guliy=v2y+v2by*ds;
						v2gulips=4;
						v2gulicnt=0;
					
					}
				
				}
		
			}


			//
		}
		//else
		else{
	
			if(v2ld<5)
				v2ld++;
			else{
				
				int n=2;
		
					int psn=rand()%6+1;

					
					if(psn==1 && !((x>=15 && x<=85) && (y+n*ds>=330 && y+n*35<=400)) && !((v1x>=15 && v1x<=85) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v3x>=15 && v3x<=85) && (v3y+n*ds>=330 && v3y+n*35<=400)) && !((v4x>=15 && v4x<=85) && (v4y+n*ds>=330 && v4y+n*35<=400))){

						v2x=15;v2y=330;
						v2ld=0;
						
						
					}
					else if(psn==2 && !((x+n*ds>=295 && x<=365) && (y+n*ds>=330 && y+n*35<=400)) && !((v1x+n*ds>=295 && v1x<=365) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v3x+n*ds>=295 && v3x<=365) && (v3y+n*ds>=330 && v3y+n*35<=400)) && !((v4x+n*ds>=295 && v4x<=365) && (v4y+n*ds>=330 && v4y+n*35<=400))){
						
						v2x=295;v2y=330;
						v2ld=0;
						
					}
					else if(psn==3 && !((x+n*ds>=610 && x<=680) && (y+n*ds>=330 && y+n*35<=400)) && !((v1x+n*ds>=610 && v1x<=680) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v3x+n*ds>=610 && v3x<=680) && (v3y+n*ds>=330 && v3y+n*35<=400)) && !((v4x+n*ds>=610 && v4x<=680) && (v4y+n*ds>=330 && v4y+n*35<=400))){
						
						v2x=610;v2y=330;
						v2ld=0;
						
					}
					else if(psn==4 && !((x+n*ds>=610 && x<=680) && (y>=15 && y<=85)) && !((v1x+n*ds>=610 && v1x<=680) && (v1y>=15 && v1y<=85)) && !((v3x+n*ds>=610 && v3x<=680) && (v3y>=15 && v3y<=85)) && !((v4x+n*ds>=610 && v4x<=680) && (v4y>=15 && v4y<=85))){

						v2x=610;v2y=15;
						v2ld=0;
						
					}
					else if(psn==5 && !((x+n*ds>=295 && x<=365) && (y>=15 && y<=85)) && !((v1x+n*ds>=295 && v1x<=365) && (v1y>=15 && v1y<=85)) && !((v3x+n*ds>=295 && v3x<=365) && (v3y>=15 && v3y<=85)) && !((v4x+n*ds>=295 && v4x<=365) && (v4y>=15 && v4y<=85))){

						v2x=295;v2y=15;
						v2ld=0;
						
					}
					else if(psn==6 && !((x>=15 && x<=85) && (y>=15 && y<=85)) && !((v1x>=15 && v1x<=85) && (v1y>=15 && v1y<=85)) && !((v3x>=15 && v3x<=85) && (v3y>=15 && v3y<=85)) && !((v4x>=15 && v4x<=85) && (v4y>=15 && v4y<=85))){
						
						v2x=15;v2y=15;
						v2ld=0;
						
					}
			

			}
	
		}


		//here
	}

}


void gndmv3()
{
	//time_t t3;
	
	//srand(time(NULL));

	if(istp==8 && mtchdan==1 && blst==0 && pause==0){

		if(v3x>=15){

			int v3r=rand()%4+1;

			if(v3r==1){
	
				if(v3gx==0 && v3gy==0 && v3dx==0 && v3dy==1 && v3ex==1 && v3ey==1 && v3bx==1 && v3by==2 && v3fx==2 && v3fy==1 && v3ix==2 && v3iy==0){
			
					//if(v3y!=330)
					if(!((x-3*ds<v3x && v3x<x+3*ds) && v3y+3*ds==y) && !((v1x-3*ds<v3x && v3x<v1x+3*ds) && v3y+3*ds==v1y) && !((v2x-3*ds<v3x && v3x<v2x+3*ds) && v3y+3*ds==v2y) && !((v4x-3*ds<v3x && v3x<v4x+3*ds) && v3y+3*ds==v4y) && !((v5x-3*ds<v3x && v3x<v5x+3*ds) && v3y+3*ds==v5y) && v3y!=330)
						v3y+=ds;
				}

				else{
					v3gx=0;v3gy=0; v3dx=0;v3dy=1; v3ex=1;v3ey=1; v3bx=1;v3by=2; v3fx=2;v3fy=1; v3ix=2;v3iy=0;
				}
	
			}

			else if(v3r==2){
	
				if(v3gx==0 && v3gy==2 && v3dx==1 && v3dy==2 && v3ex==1 && v3ey==1 && v3bx==2 && v3by==1 && v3fx==1 && v3fy==0 && v3ix==0 && v3iy==0){
			
					//if(v3x!=610)
					if(!((y-3*ds<v3y && v3y<y+3*ds) && v3x+3*ds==x) && !((v1y-3*ds<v3y && v3y<v1y+3*ds) && v3x+3*ds==v1x) && !((v2y-3*ds<v3y && v3y<v2y+3*ds) && v3x+3*ds==v2x) && !((v4y-3*ds<v3y && v3y<v4y+3*ds) && v3x+3*ds==v4x) && !((v5y-3*ds<v3y && v3y<v5y+3*ds) && v3x+3*ds==v5x) && v3x!=610)
						v3x+=ds;
				}

				else{
					v3gx=0;v3gy=2; v3dx=1;v3dy=2; v3ex=1;v3ey=1; v3bx=2;v3by=1; v3fx=1;v3fy=0; v3ix=0;v3iy=0;
				}
	
			}

			else if(v3r==3){
	
				if(v3gx==0 && v3gy==2 && v3dx==0 && v3dy==1 && v3ex==1 && v3ey==1 && v3bx==1 && v3by==0 && v3fx==2 && v3fy==1 && v3ix==2 && v3iy==2){
			
					//if(v3y!=15)
					if(!((x-3*ds<v3x && v3x<x+3*ds) && v3y-3*ds==y) && !((v1x-3*ds<v3x && v3x<v1x+3*ds) && v3y-3*ds==v1y) && !((v2x-3*ds<v3x && v3x<v2x+3*ds) && v3y-3*ds==v2y) && !((v4x-3*ds<v3x && v3x<v4x+3*ds) && v3y-3*ds==v4y) && !((v5x-3*ds<v3x && v3x<v5x+3*ds) && v3y-3*ds==v5y) && v3y!=15)
						v3y-=ds;
				}

				else{
					v3gx=0;v3gy=2; v3dx=0;v3dy=1; v3ex=1;v3ey=1; v3bx=1;v3by=0; v3fx=2;v3fy=1; v3ix=2;v3iy=2;
				}
	
			}

			else if(v3r==4){
	
				if(v3gx==2 && v3gy==0 && v3dx==1 && v3dy==0 && v3ex==1 && v3ey==1 && v3bx==0 && v3by==1 && v3fx==1 && v3fy==2 && v3ix==2 && v3iy==2){
			
					//if(v3x!=15)
					if(!((y-3*ds<v3y && v3y<y+3*ds) && v3x-3*ds==x) && !((v1y-3*ds<v3y && v3y<v1y+3*ds) && v3x-3*ds==v1x) && !((v2y-3*ds<v3y && v3y<v2y+3*ds) && v3x-3*ds==v2x) && !((v4y-3*ds<v3y && v3y<v4y+3*ds) && v3x-3*ds==v4x) && !((v5y-3*ds<v3y && v3y<v5y+3*ds) && v3x-3*ds==v5x) && v3x!=15)
						v3x-=ds;
				}

				else{
					v3gx=2;v3gy=0; v3dx=1;v3dy=0; v3ex=1;v3ey=1; v3bx=0;v3by=1; v3fx=1;v3fy=2; v3ix=2;v3iy=2;
				}
	
	
			}

			//guli

			if(v3gulicnt<8)
				v3gulicnt++;

			else{
			
				if(v3x+v3bx*ds == v3x+v3ex*ds){
				
					if(v3y+v3by*ds>v3y+v3ey*ds){
					
						v3gulix=v3x+v3bx*ds;
						v3guliy=v3y+v3by*ds;
						v3gulips=1;
						v3gulicnt=0;
					
					}
					else{
					
						v3gulix=v3x+v3bx*ds;
						v3guliy=v3y+v3by*ds;
						v3gulips=3;
						v3gulicnt=0;
					
					}
				
				}

				else if(v3y+v3by*ds == v3y+v3ey*ds){
				
					if(v3x+v3bx*ds>v3x+v3ex*ds){
					
						v3gulix=v3x+v3bx*ds;
						v3guliy=v3y+v3by*ds;
						v3gulips=2;
						v3gulicnt=0;
					
					}
					else{
					
						v3gulix=v3x+v3bx*ds;
						v3guliy=v3y+v3by*ds;
						v3gulips=4;
						v3gulicnt=0;
					
					}
				
				}
		
			}


			//
		}

		//else
		else{
	
			if(v3ld<5)
				v3ld++;
			else{
				
				int n=2;
		
					int psn=rand()%6+1;

					
					if(psn==1 && !((x>=15 && x<=85) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x>=15 && v2x<=85) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v1x>=15 && v1x<=85) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v4x>=15 && v4x<=85) && (v4y+n*ds>=330 && v4y+n*35<=400))){

						v3x=15;v3y=330;
						v3ld=0;
						
						
					}
					else if(psn==2 && !((x+n*ds>=295 && x<=365) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x+n*ds>=295 && v2x<=365) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v1x+n*ds>=295 && v1x<=365) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v4x+n*ds>=295 && v4x<=365) && (v4y+n*ds>=330 && v4y+n*35<=400))){
						
						v3x=295;v3y=330;
						v3ld=0;
						
					}
					else if(psn==3 && !((x+n*ds>=610 && x<=680) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x+n*ds>=610 && v2x<=680) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v1x+n*ds>=610 && v1x<=680) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v4x+n*ds>=610 && v4x<=680) && (v4y+n*ds>=330 && v4y+n*35<=400))){
						
						v3x=610;v3y=330;
						v3ld=0;
						
					}
					else if(psn==4 && !((x+n*ds>=610 && x<=680) && (y>=15 && y<=85)) && !((v2x+n*ds>=610 && v2x<=680) && (v2y>=15 && v2y<=85)) && !((v1x+n*ds>=610 && v1x<=680) && (v1y>=15 && v1y<=85)) && !((v4x+n*ds>=610 && v4x<=680) && (v4y>=15 && v4y<=85))){

						v3x=610;v3y=15;
						v3ld=0;
						
					}
					else if(psn==5 && !((x+n*ds>=295 && x<=365) && (y>=15 && y<=85)) && !((v2x+n*ds>=295 && v2x<=365) && (v2y>=15 && v2y<=85)) && !((v1x+n*ds>=295 && v1x<=365) && (v1y>=15 && v1y<=85)) && !((v4x+n*ds>=295 && v4x<=365) && (v4y>=15 && v4y<=85))){

						v3x=295;v3y=15;
						v3ld=0;
						
					}
					else if(psn==6 && !((x>=15 && x<=85) && (y>=15 && y<=85)) && !((v2x>=15 && v2x<=85) && (v2y>=15 && v2y<=85)) && !((v1x>=15 && v1x<=85) && (v1y>=15 && v1y<=85)) && !((v4x>=15 && v4x<=85) && (v4y>=15 && v4y<=85))){
						
						v3x=15;v3y=15;
						v3ld=0;
						
					}
			

			}
	
		}


		//here
	}


}


void gndmv4()
{
	//srand(time(NULL));

	if(istp==8 && mtchdan==1 && blst==0 && pause==0){

		if(v4x>=15){

			int v4r=rand()%4+1;

			if(v4r==1){
	
				if(v4gx==0 && v4gy==0 && v4dx==0 && v4dy==1 && v4ex==1 && v4ey==1 && v4bx==1 && v4by==2 && v4fx==2 && v4fy==1 && v4ix==2 && v4iy==0){
			
					//if(v4y!=330)
					if(!((x-3*ds<v4x && v4x<x+3*ds) && v4y+3*ds==y) && !((v1x-3*ds<v4x && v4x<v1x+3*ds) && v4y+3*ds==v1y) && !((v2x-3*ds<v4x && v4x<v2x+3*ds) && v4y+3*ds==v2y) && !((v3x-3*ds<v4x && v4x<v3x+3*ds) && v4y+3*ds==v3y) && !((v5x-3*ds<v4x && v4x<v5x+3*ds) && v4y+3*ds==v5y) && v4y!=330)
						v4y+=ds;
				}

				else{
					v4gx=0;v4gy=0; v4dx=0;v4dy=1; v4ex=1;v4ey=1; v4bx=1;v4by=2; v4fx=2;v4fy=1; v4ix=2;v4iy=0;
				}
	
			}

			else if(v4r==2){
	
				if(v4gx==0 && v4gy==2 && v4dx==1 && v4dy==2 && v4ex==1 && v4ey==1 && v4bx==2 && v4by==1 && v4fx==1 && v4fy==0 && v4ix==0 && v4iy==0){
			
					//if(v4x!=610)
					if(!((y-3*ds<v4y && v4y<y+3*ds) && v4x+3*ds==x) && !((v1y-3*ds<v4y && v4y<v1y+3*ds) && v4x+3*ds==v1x) && !((v2y-3*ds<v4y && v4y<v2y+3*ds) && v4x+3*ds==v2x) && !((v3y-3*ds<v4y && v4y<v3y+3*ds) && v4x+3*ds==v3x) && !((v5y-3*ds<v4y && v4y<v5y+3*ds) && v4x+3*ds==v5x) && v4x!=610)
						v4x+=ds;
				}

				else{
					v4gx=0;v4gy=2; v4dx=1;v4dy=2; v4ex=1;v4ey=1; v4bx=2;v4by=1; v4fx=1;v4fy=0; v4ix=0;v4iy=0;
				}
	
			}

			else if(v4r==3){
	
				if(v4gx==0 && v4gy==2 && v4dx==0 && v4dy==1 && v4ex==1 && v4ey==1 && v4bx==1 && v4by==0 && v4fx==2 && v4fy==1 && v4ix==2 && v4iy==2){
			
					//if(v4y!=15)
					if(!((x-3*ds<v4x && v4x<x+3*ds) && v4y-3*ds==y) && !((v1x-3*ds<v4x && v4x<v1x+3*ds) && v4y-3*ds==v1y) && !((v2x-3*ds<v4x && v4x<v2x+3*ds) && v4y-3*ds==v2y) && !((v3x-3*ds<v4x && v4x<v3x+3*ds) && v4y-3*ds==v3y) && !((v5x-3*ds<v4x && v4x<v5x+3*ds) && v4y-3*ds==v5y) && v4y!=15)
						v4y-=ds;
				}

				else{
					v4gx=0;v4gy=2; v4dx=0;v4dy=1; v4ex=1;v4ey=1; v4bx=1;v4by=0; v4fx=2;v4fy=1; v4ix=2;v4iy=2;
				}
	
			}

			else if(v4r==4){
	
				if(v4gx==2 && v4gy==0 && v4dx==1 && v4dy==0 && v4ex==1 && v4ey==1 && v4bx==0 && v4by==1 && v4fx==1 && v4fy==2 && v4ix==2 && v4iy==2){
			
					//if(v4x!=15)
					if(!((y-3*ds<v4y && v4y<y+3*ds) && v4x-3*ds==x) && !((v1y-3*ds<v4y && v4y<v1y+3*ds) && v4x-3*ds==v1x) && !((v2y-3*ds<v4y && v4y<v2y+3*ds) && v4x-3*ds==v2x) && !((v3y-3*ds<v4y && v4y<v3y+3*ds) && v4x-3*ds==v3x) && !((v5y-3*ds<v4y && v4y<v5y+3*ds) && v4x-3*ds==v5x) && v4x!=15)
						v4x-=ds;
				}

				else{
					v4gx=2;v4gy=0; v4dx=1;v4dy=0; v4ex=1;v4ey=1; v4bx=0;v4by=1; v4fx=1;v4fy=2; v4ix=2;v4iy=2;
				}
	
	
			}
			//guli

			if(v4gulicnt<8)
				v4gulicnt++;

			else{
			
				if(v4x+v4bx*ds == v4x+v4ex*ds){
				
					if(v4y+v4by*ds>v4y+v4ey*ds){
					
						v4gulix=v4x+v4bx*ds;
						v4guliy=v4y+v4by*ds;
						v4gulips=1;
						v4gulicnt=0;
					
					}
					else{
					
						v4gulix=v4x+v4bx*ds;
						v4guliy=v4y+v4by*ds;
						v4gulips=3;
						v4gulicnt=0;
					
					}
				
				}

				else if(v4y+v4by*ds == v4y+v4ey*ds){
				
					if(v4x+v4bx*ds>v4x+v4ex*ds){
					
						v4gulix=v4x+v4bx*ds;
						v4guliy=v4y+v4by*ds;
						v4gulips=2;
						v4gulicnt=0;
					
					}
					else{
					
						v4gulix=v4x+v4bx*ds;
						v4guliy=v4y+v4by*ds;
						v4gulips=4;
						v4gulicnt=0;
					
					}
				
				}
		
			}



			//
		}
		//else
		else{
	
			if(v4ld<5)
				v4ld++;
			else{
				
				int n=2;
		
					int psn=rand()%6+1;

					
					if(psn==1 && !((x>=15 && x<=85) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x>=15 && v2x<=85) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v1x>=15 && v1x<=85) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v3x>=15 && v3x<=85) && (v3y+n*ds>=330 && v3y+n*35<=400))){

						v4x=15;v4y=330;
						v4ld=0;
						
						
					}
					else if(psn==2 && !((x+n*ds>=295 && x<=365) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x+n*ds>=295 && v2x<=365) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v1x+n*ds>=295 && v1x<=365) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v3x+n*ds>=295 && v3x<=365) && (v3y+n*ds>=330 && v3y+n*35<=400))){
						
						v4x=295;v4y=330;
						v4ld=0;
						
					}
					else if(psn==3 && !((x+n*ds>=610 && x<=680) && (y+n*ds>=330 && y+n*35<=400)) && !((v2x+n*ds>=610 && v2x<=680) && (v2y+n*ds>=330 && v2y+n*35<=400)) && !((v1x+n*ds>=610 && v1x<=680) && (v1y+n*ds>=330 && v1y+n*35<=400)) && !((v3x+n*ds>=610 && v3x<=680) && (v3y+n*ds>=330 && v3y+n*35<=400))){
						
						v4x=610;v4y=330;
						v4ld=0;
						
					}
					else if(psn==4 && !((x+n*ds>=610 && x<=680) && (y>=15 && y<=85)) && !((v2x+n*ds>=610 && v2x<=680) && (v2y>=15 && v2y<=85)) && !((v1x+n*ds>=610 && v1x<=680) && (v1y>=15 && v1y<=85)) && !((v3x+n*ds>=610 && v3x<=680) && (v3y>=15 && v3y<=85))){

						v4x=610;v4y=15;
						v4ld=0;
						
					}
					else if(psn==5 && !((x+n*ds>=295 && x<=365) && (y>=15 && y<=85)) && !((v2x+n*ds>=295 && v2x<=365) && (v2y>=15 && v2y<=85)) && !((v1x+n*ds>=295 && v1x<=365) && (v1y>=15 && v1y<=85)) && !((v3x+n*ds>=295 && v3x<=365) && (v3y>=15 && v3y<=85))){

						v4x=295;v4y=15;
						v4ld=0;
						
					}
					else if(psn==6 && !((x>=15 && x<=85) && (y>=15 && y<=85)) && !((v2x>=15 && v2x<=85) && (v2y>=15 && v2y<=85)) && !((v1x>=15 && v1x<=85) && (v1y>=15 && v1y<=85)) && !((v3x>=15 && v3x<=85) && (v3y>=15 && v3y<=85))){
						
						v4x=15;v4y=15;
						v4ld=0;
						
					}
			

			}
	
		}



		//here
	}


}


void gndmv5()
{
	srand(time(NULL));
}


void vguli()
{
	if(istp==8 && blst==0 && pause==0){

		//v1 guli

		if(v1gulips==1){
		
			if(v1guliy<400)
				v1guliy+=ds;
			else
				v1guliy=9999;

		}
		

		else if(v1gulips==2){
			
			if(v1gulix<680)
				v1gulix+=ds;
			else
				v1guliy=9999;

		}


		else if(v1gulips==3){
			
			if(v1guliy>15)
				v1guliy-=ds;
			else
				v1guliy=-9999;

		}


		else if(v1gulips==4 ){
			
			if(v1gulix>15)
				v1gulix-=ds;
			else
				v1guliy=9999;

		}

		//v2 guli
		if(v2gulips==1){
		
			if(v2guliy<400)
				v2guliy+=ds;
			else
				v2guliy=9999;

		}
		

		else if(v2gulips==2){
			
			if(v2gulix<680)
				v2gulix+=ds;
			else
				v2guliy=9999;

		}


		else if(v2gulips==3){
			
			if(v2guliy>15)
				v2guliy-=ds;
			else
				v2guliy=-9999;

		}


		else if(v2gulips==4 ){
			
			if(v2gulix>15)
				v2gulix-=ds;
			else
				v2guliy=9999;

		}


		//v3 guli

		if(v3gulips==1){
		
			if(v3guliy<400)
				v3guliy+=ds;
			else
				v3guliy=9999;

		}
		

		else if(v3gulips==2){
			
			if(v3gulix<680)
				v3gulix+=ds;
			else
				v3guliy=9999;

		}


		else if(v3gulips==3){
			
			if(v3guliy>15)
				v3guliy-=ds;
			else
				v3guliy=-9999;

		}


		else if(v3gulips==4 ){
			
			if(v3gulix>15)
				v3gulix-=ds;
			else
				v3guliy=9999;

		}


		//v4 guli

		if(v4gulips==1){
		
			if(v4guliy<400)
				v4guliy+=ds;
			else
				v4guliy=9999;

		}
		

		else if(v4gulips==2){
			
			if(v4gulix<680)
				v4gulix+=ds;
			else
				v4guliy=9999;

		}


		else if(v4gulips==3){
			
			if(v4guliy>15)
				v4guliy-=ds;
			else
				v4guliy=-9999;

		}


		else if(v4gulips==4 ){
			
			if(v4gulix>15)
				v4gulix-=ds;
			else
				v4guliy=9999;

		}

		//
	
	}

}


void mvhr(unsigned char key)
{
	if(key == GLUT_KEY_UP){
	
		if(gx==0 && gy==0 && dx==0 && dy==1 && ex==1 && ey==1 && bx==1 && by==2 && fx==2 && fy==1 && ix==2 && iy==0){
			
		//if(((x+bx*ds+ds!=v1x && y+bx*ds+ds!=v1y) && ((x+bx*ds)!=v2x && (y+bx*ds+ds)!=v2y) && (x+bx*ds+ds!=v3x && y+bx*ds+ds!=v3y) && (x+bx*ds+ds!=v4x && y+bx*ds+ds!=v4y) && (x+bx*ds+ds!=v5x && y+bx*ds+ds!=v5y)) && y!=330)

			if(!((v1x-3*ds<x && x<v1x+3*ds) && y+3*ds==v1y) && !((v2x-3*ds<x && x<v2x+3*ds) && y+3*ds==v2y) && !((v3x-3*ds<x && x<v3x+3*ds) && y+3*ds==v3y) && !((v4x-3*ds<x && x<v4x+3*ds) && y+3*ds==v4y) && !((v5x-3*ds<x && x<v5x+3*ds) && y+3*ds==v5y) && y!=330)
			
				y+=ds;
				
				//if(y!=330)
					
		}

		else{
			gx=0;gy=0; dx=0;dy=1; ex=1;ey=1; bx=1;by=2; fx=2;fy=1; ix=2;iy=0;
		}
	}
		

	
	
	else if(key == GLUT_KEY_DOWN){
	
		if(gx==0 && gy==2 && dx==0 && dy==1 && ex==1 && ey==1 && bx==1 && by==0 && fx==2 && fy==1 && ix==2 && iy==2){
			
			
		 	if(!((v1x-3*ds<x && x<v1x+3*ds) && y-3*ds==v1y) && !((v2x-3*ds<x && x<v2x+3*ds) && y-3*ds==v2y) && !((v3x-3*ds<x && x<v3x+3*ds) && y-3*ds==v3y) && !((v4x-3*ds<x && x<v4x+3*ds) && y-3*ds==v4y) && !((v5x-3*ds<x && x<v5x+3*ds) && y-3*ds==v5y) && y!=15)
				y-=ds;
		}

		else{
			gx=0;gy=2; dx=0;dy=1; ex=1;ey=1; bx=1;by=0; fx=2;fy=1; ix=2;iy=2;
		}
	
	}
		

	
	
	else if(key == GLUT_KEY_RIGHT){
	
		if(gx==0 && gy==2 && dx==1 && dy==2 && ex==1 && ey==1 && bx==2 && by==1 && fx==1 && fy==0 && ix==0 && iy==0){
			
			//if(x!=610)
			if(!((v1y-3*ds<y && y<v1y+3*ds) && x+3*ds==v1x) && !((v2y-3*ds<y && y<v2y+3*ds) && x+3*ds==v2x) && !((v3y-3*ds<y && y<v3y+3*ds) && x+3*ds==v3x) && !((v4y-3*ds<y && y<v4y+3*ds) && x+3*ds==v4x) && !((v5y-3*ds<y && y<v5y+3*ds) && x+3*ds==v5x) && x!=610)
				x+=ds;
		}

		else{
			gx=0;gy=2; dx=1;dy=2; ex=1;ey=1; bx=2;by=1; fx=1;fy=0; ix=0;iy=0;
		}
	
	}
		

	
	
	else if(key == GLUT_KEY_LEFT){
	
		if(gx==2 && gy==0 && dx==1 && dy==0 && ex==1 && ey==1 && bx==0 && by==1 && fx==1 && fy==2 && ix==2 && iy==2){
			
			//if(x!=15)
			if(!((v1y-3*ds<y && y<v1y+3*ds) && x-3*ds==v1x) && !((v2y-3*ds<y && y<v2y+3*ds) && x-3*ds==v2x) && !((v3y-3*ds<y && y<v3y+3*ds) && x-3*ds==v3x) && !((v4y-3*ds<y && y<v4y+3*ds) && x-3*ds==v4x) && !((v5y-3*ds<y && y<v5y+3*ds) && x-3*ds==v5x) && x!=15)
				x-=ds;
		}

		else{
			gx=2;gy=0; dx=1;dy=0; ex=1;ey=1; bx=0;by=1; fx=1;fy=2; ix=2;iy=2;
		}
	
	}

}


void iSpecialKeyboard(unsigned char key)
{
	
	if(istp==7 && intfcedt==1){

		if(key == GLUT_KEY_UP)
			ply++;	
		if(key == GLUT_KEY_DOWN)
			ply--;	
	
		if(key == GLUT_KEY_RIGHT)
			plx++;	
		if(key == GLUT_KEY_LEFT)
			plx--;	
	}


	else if(istp==8 && blst==0 && pause==0){

		mvhr(key);

	}

}




void hrr()
{
	iSetColor(0,0,0);

	iRectangle(x+gx*ds,y+gy*ds,30,30);
	iFilledRectangle(x+gx*ds+5,y+gy*ds+5,20,20);
	
	iRectangle(x+dx*ds,y+dy*ds,30,30);
	iFilledRectangle(x+dx*ds+5,y+dy*ds+5,20,20);
	
	iSetColor(hrec,hrec,hrec);
	iRectangle(x+ex*ds,y+ey*ds,30,30);
	iFilledRectangle(x+ex*ds+5,y+ey*ds+5,20,20);
	
	iSetColor(0,0,0);

	iRectangle(x+bx*ds,y+by*ds,30,30);
	iFilledRectangle(x+bx*ds+5,y+by*ds+5,20,20);
	
	iRectangle(x+fx*ds,y+fy*ds,30,30);
	iFilledRectangle(x+fx*ds+5,y+fy*ds+5,20,20);
	
	iRectangle(x+ix*ds,y+iy*ds,30,30);
	iFilledRectangle(x+ix*ds+5,y+iy*ds+5,20,20);

	//guli (y axis)
	
	iRectangle(gulix1,guliyu1,30,30);
	iFilledRectangle(gulix1+5, guliyu1+5,20,20);

	iRectangle(gulix2,guliyu2,30,30);
	iFilledRectangle(gulix2+5, guliyu2+5,20,20);

	iRectangle(gulix1,guliyd1,30,30);
	iFilledRectangle(gulix1+5, guliyd1+5,20,20);

	iRectangle(gulix2,guliyd2,30,30);
	iFilledRectangle(gulix2+5, guliyd2+5,20,20);


	//guli(x axis R)
	
	iRectangle(gulixr1,guliyrl1,30,30);
	iFilledRectangle(gulixr1+5, guliyrl1+5,20,20);

	iRectangle(gulixr2,guliyrl2,30,30);
	iFilledRectangle(gulixr2+5, guliyrl2+5,20,20);

	iRectangle(gulixr3,guliyrl3,30,30);
	iFilledRectangle(gulixr3+5, guliyrl3+5,20,20);

	//guli(x axis L)

	iRectangle(gulixl1,guliyrl1,30,30);
	iFilledRectangle(gulixl1+5, guliyrl1+5,20,20);

	iRectangle(gulixl2,guliyrl2,30,30);
	iFilledRectangle(gulixl2+5, guliyrl2+5,20,20);

	iRectangle(gulixl3,guliyrl3,30,30);
	iFilledRectangle(gulixl3+5, guliyrl3+5,20,20);


}



void mydn()
{

	iSetColor(137,151,117);
	iFilledRectangle(0,0,980,450);

	
	iSetColor(0,0,0);

	//iRectangle(0,0,980,450);

	iRectangle(4,4,717,437);
	iRectangle(5,5,715,435);
	iRectangle(6,6,713,433);

	iRectangle(726,4,239,437);
	iRectangle(727,5,237,435);
	iRectangle(728,6,235,433);
	
	



	iSetColor(131,141,114);

	int i,j;

	for(i=15; i<=400; i+=35){
	
		for(j=15; j<=680; j+=35){

				iRectangle(j,i,30,30);
				iFilledRectangle(j+5,i+5,20,20);
		
		}
	}

}



void gundaKarkhana(int vx, int vy, int vgx, int vgy, int vdx, int vdy, int  vex, int vey, int vbx, int vby, int vfx, int vfy, int  vix, int viy)
{
	iSetColor(0,0,0);

	iRectangle(vx+vgx*ds,vy+vgy*ds,30,30);
	iFilledRectangle(vx+vgx*ds+5,vy+vgy*ds+5,20,20);
	
	iRectangle(vx+vdx*ds,vy+vdy*ds,30,30);
	iFilledRectangle(vx+vdx*ds+5,vy+vdy*ds+5,20,20);
	
	
	iRectangle(vx+vex*ds,vy+vey*ds,30,30);
	iFilledRectangle(vx+vex*ds+5,vy+vey*ds+5,20,20);
	

	iRectangle(vx+vbx*ds,vy+vby*ds,30,30);
	iFilledRectangle(vx+vbx*ds+5,vy+vby*ds+5,20,20);
	
	iRectangle(vx+vfx*ds,vy+vfy*ds,30,30);
	iFilledRectangle(vx+vfx*ds+5,vy+vfy*ds+5,20,20);
	
	iRectangle(vx+vix*ds,vy+viy*ds,30,30);
	iFilledRectangle(vx+vix*ds+5,vy+viy*ds+5,20,20);


}

void fblst(int xx, int yy)
{
	iSetColor(0,0,0);

	if(blstchng==0){
	
		iRectangle(xx,yy,30,30);
		iFilledRectangle(xx+5,yy+5,20,20);

		iRectangle(xx+35,yy+35,30,30);
		iFilledRectangle(xx+5+35,yy+5+35,20,20);

		iRectangle(xx+70,yy,30,30);
		iFilledRectangle(xx+5+70,yy+5,20,20);

		iRectangle(xx,yy+70,30,30);
		iFilledRectangle(xx+5,yy+5+70,20,20);

		iRectangle(xx+70,yy+70,30,30);
		iFilledRectangle(xx+5+70,yy+5+70,20,20);
	
	}

	else{
	
		iRectangle(xx+35,yy,30,30);
		iFilledRectangle(xx+5+35,yy+5,20,20);

		iRectangle(xx,yy+35,30,30);
		iFilledRectangle(xx+5,yy+5+35,20,20);

		iRectangle(xx+70,yy+35,30,30);
		iFilledRectangle(xx+5+70,yy+5+35,20,20);

		iRectangle(xx+35,yy+70,30,30);
		iFilledRectangle(xx+5+35,yy+5+70,20,20);

	
	}



}

void upanmtnerror1()
{

	if(dwnanmtny>15){

		iSetColor(137,151,117);
		iFilledRectangle(715,4,35,35);

		iSetColor(0,0,0);
		iFilledRectangle(715,4,36,3);

		}

}

void scr()
{

	int z=score;
	int i=0;
		
	for(i=4; i>=0; i--){
		sc[i]=z%10+48;
			z/=10;
	}
	sc[5]=0;

	if(score>highscore){
	
		highscore=score;
		FILE *fp;
		fp=fopen("scr.txt","w");
		fprintf(fp,"%d",highscore);
		fclose(fp);
	
	}

	FILE *fp1;
	fp1=fopen("scr.txt","r");
	fscanf(fp1,"%d",&highscore);
	fclose(fp1);

	int z1=highscore;

	for(i=4; i>=0; i--){
		hsc[i]=z1%10+48;
			z1/=10;
	}
	hsc[5]=0;



	iText(scrx+820,scry+352,"Score",GLUT_BITMAP_HELVETICA_18);
	iText(scrx+801,scry+266,"High Score",GLUT_BITMAP_HELVETICA_18);

	iText(scrx+820,scry+324,sc,GLUT_BITMAP_HELVETICA_18);
	iText(scrx+820,scry+239,hsc,GLUT_BITMAP_HELVETICA_18);
	//pointshw(scrx,scry,hiscrx,hiscry,0);



}

void homepg()
{
	
	if(istp==-1){

		bg();
		iSetColor(0,0,0);
		if(icnt>5)
			bldrctng(649,38,291,46,3);
	}

	else if(istp==0){

		iClear();
		bg();
		loading(649,38);
	}

	else if(istp==1){

		iClear();
		bg();
		//gundaKarkhananew(bgx, bgy, bggx, bggy, bgdx, bgdy, bgex, bgey, bgbx, bgby, bgfx, bgfy, bgix, bgiy, rct, frct, r_f, bds,1);
	}

	else if(istp==2){
	
		iClear();
		bg();
		loading(38,38);
	}

	if(istp==3){
	
		iClear();
		bg();
		iSetColor(0,0,0);

		iFilledRectangle(ltx+ltex*ltds+10-ltc+5,lty+ltey*ltds+10-ltc+5,ltc*2,ltc*2);
		
		if(ltc==10)

			iRectangle(ltx+ltex*ltds,lty+ltey*ltds,30,30);

	}

	else if(istp==4){
	
		iClear();
		bg();
		gundaKarkhananew(ltx, lty, ltgx, ltgy, ltdx, ltdy, ltex, ltey, ltbx, ltby, ltfx, ltfy, ltix, ltiy, 30, 20, 5, ltds,1);
	}

	else if(istp==5){
	
		iClear();
		bg();
		gundaKarkhananew(ltx, lty, ltgx, ltgy, ltdx, ltdy, ltex, ltey, ltbx, ltby, ltfx, ltfy, ltix, ltiy, 30, 20, 5, ltds,1);
	}

	else if(istp==6){
	
		iClear();
		bg();
		iSetColor(0,0,0);

		iFilledRectangle(ltx+ltex*ltds+10-ltc+5,lty+ltey*ltds+10-ltc+5,ltc*2,ltc*2);
	}
	else if(istp==7){
		
		iClear();
		
		bg();
		
		iSetColor(0,0,0);

		//iRectangle(0,0,980,450);

		iRectangle(4,4,961,437);
		iRectangle(5,5,959,435);
		iRectangle(6,6,957,433);



		iSetColor(0,0,0);
		bldcrcl(clcx,clcy,clcr,clcb);

		gundaKarkhananew(inx, iny,0,0,0,1,1,1,1,2,2,1,2,0,inrct,infrct,inr_f,indss,inrctbld);
	
		play(plx,ply);

		iSetColor(0,0,0);
		bldrctng(0,0,980,450,istp7b);
		iFilledRectangle(istp7x, istp7y,-1000,1000);
		
		upanmtn(27,upanmtny);

		if(intfcedt==1){

			pointshw(clcx,clcy,clcr,clcb,0);
			pointshw(inx,iny,inrct,infrct,200);
			pointshw(inr_f,indss,inrctbld,-111,400);
			pointshw(plx,ply,-111,-111,600);
		}

		//PlaySound("plysnd",NULL, SND_ASYNC);
	}

	else if(istp==8){
	
		iClear();

		//mtchdan<-35*5
		

		mydn();
	
		if(blst==0)
			hrr();
		else
			fblst(x,y);

		gundaKarkhana(v1x, v1y, v1gx, v1gy, v1dx, v1dy, v1ex, v1ey, v1bx, v1by, v1fx, v1fy, v1ix, v1iy);

		gundaKarkhana(v2x, v2y, v2gx, v2gy, v2dx, v2dy, v2ex, v2ey, v2bx, v2by, v2fx, v2fy, v2ix, v2iy);

		gundaKarkhana(v3x, v3y, v3gx, v3gy, v3dx, v3dy, v3ex, v3ey, v3bx, v3by, v3fx, v3fy, v3ix, v3iy);

		gundaKarkhana(v4x, v4y, v4gx, v4gy, v4dx, v4dy, v4ex, v4ey, v4bx, v4by, v4fx, v4fy, v4ix, v4iy);
	
		//gundaKarkhana(v5x, v5y, v5gx, v5gy, v5dx, v5dy, v5ex, v5ey, v5bx, v5by, v5fx, v5fy, v5ix, v5iy);

		//gunda's guli

		iRectangle(v1gulix,v1guliy,30,30);
		iFilledRectangle(v1gulix+5,v1guliy+5,20,20);

		iRectangle(v2gulix,v2guliy,30,30);
		iFilledRectangle(v2gulix+5,v2guliy+5,20,20);

		iRectangle(v3gulix,v3guliy,30,30);
		iFilledRectangle(v3gulix+5,v3guliy+5,20,20);

		iRectangle(v4gulix,v4guliy,30,30);
		iFilledRectangle(v4gulix+5,v4guliy+5,20,20);


		
		scr();

		iSetColor(0,0,0);

		for(int i=0; i<life*25; i+=25){
		
			iRectangle(820+15,140+i,20,20);
			iFilledRectangle(820+15+4,140+i+4,12,12);
		
		}

		iText(790,20+23,"Exit",GLUT_BITMAP_HELVETICA_12);
		bldrctng(783,33,37,27,3);

		//error fix
		upanmtnerror1();

		
		
		upanmtn(20,upanmtny1);
		dwnanmtn(20,dwnanmtny1);


		dwnanmtn(27,dwnanmtny);	// down animation



		upanmtn(27,gmovrupanmtn);

		
		
	
	
	}

	else if(istp==9){	//about
	
		iClear();
		bg();
	
		iSetColor(0,0,0);

		iRectangle(4,4,961,437);
		iRectangle(5,5,959,435);
		iRectangle(6,6,957,433);

		iSetColor(0,0,0);

		iText(130+50,300,"Developer:",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(130+50+150,300,"Md.Fuad Bin Rahman",GLUT_BITMAP_TIMES_ROMAN_24);



		iText(35*2,35*2,"Back",GLUT_BITMAP_HELVETICA_18);

		bldrctng(62,60,59,30,3);
	
	
	}

	else if(istp==10){	//help
	
		iClear();
		bg();

		iSetColor(0,0,0);

		iRectangle(4,4,961,437);
		iRectangle(5,5,959,435);
		iRectangle(6,6,957,433);
	
		iSetColor(0,0,0);

		iText(130+50,300,"- Use ARROW KEYs to control brick left, right, up, down ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(180,200,"- Use Left Button of Mouse to fire",GLUT_BITMAP_TIMES_ROMAN_24);


		iText(35*2,35*2,"Back",GLUT_BITMAP_HELVETICA_18);

		bldrctng(62,60,59,30,3);
	
	}

	else if(istp==11){	//game over
	
		iClear();
		bg();

		iSetColor(0,0,0);

		iRectangle(4,4,961,437);
		iRectangle(5,5,959,435);
		iRectangle(6,6,957,433);


	
		iText(208+820-600,50+352-100,"Score",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(208+801-600,50+266-100,"High Score",GLUT_BITMAP_TIMES_ROMAN_24);

		iText(208+820-600,50+324-100,sc,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(208+820-600,50+239-100,hsc,GLUT_BITMAP_TIMES_ROMAN_24);

		//pointshw(scrx,scry,hiscrx,hiscry,0);

		iSetColor(0,0,0);

		iText(35*2,35*2,"Back",GLUT_BITMAP_HELVETICA_18);

		bldrctng(62,60,59,30,3);

		dwnanmtn(27,gmovrdwnanmtn);
	
	}

	

}



void iDraw()
{

	
	homepg();
	
	

}



void bllt()
{
	//annimy
	//v1
	if((gulix1==v1x+v1gx*ds && guliyu1==v1y+v1gy*ds) || (gulix1==v1x+v1dx*ds && guliyu1==v1y+v1dy*ds) || (gulix1==v1x+v1ex*ds && guliyu1==v1y+v1ey*ds) || (gulix1==v1x+v1fx*ds && guliyu1==v1y+v1fy*ds) || (gulix1==v1x+v1ix*ds && guliyu1==v1y+v1iy*ds) || (gulix1==v1x+v1bx*ds && guliyu1==v1y+v1by*ds)){
	
		guliyu1=999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulix2==v1x+v1gx*ds && guliyu2==v1y+v1gy*ds) || (gulix2==v1x+v1dx*ds && guliyu2==v1y+v1dy*ds) || (gulix2==v1x+v1ex*ds && guliyu2==v1y+v1ey*ds) || (gulix2==v1x+v1fx*ds && guliyu2==v1y+v1fy*ds) || (gulix2==v1x+v1ix*ds && guliyu2==v1y+v1iy*ds) || (gulix2==v1x+v1bx*ds && guliyu2==v1y+v1by*ds)){
	
		guliyu2=999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulix1==v1x+v1gx*ds && guliyd1==v1y+v1gy*ds) || (gulix1==v1x+v1dx*ds && guliyd1==v1y+v1dy*ds) || (gulix1==v1x+v1ex*ds && guliyd1==v1y+v1ey*ds) || (gulix1==v1x+v1fx*ds && guliyd1==v1y+v1fy*ds) || (gulix1==v1x+v1ix*ds && guliyd1==v1y+v1iy*ds) || (gulix1==v1x+v1bx*ds && guliyd1==v1y+v1by*ds)){
	
		guliyd1=-999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulix2==v1x+v1gx*ds && guliyd2==v1y+v1gy*ds) || (gulix2==v1x+v1dx*ds && guliyd2==v1y+v1dy*ds) || (gulix2==v1x+v1ex*ds && guliyd2==v1y+v1ey*ds) || (gulix2==v1x+v1fx*ds && guliyd2==v1y+v1fy*ds) || (gulix2==v1x+v1ix*ds && guliyd2==v1y+v1iy*ds) || (gulix2==v1x+v1bx*ds && guliyd2==v1y+v1by*ds)){
	
		guliyd2=-999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulixr1==v1x+v1gx*ds && guliyrl1==v1y+v1gy*ds) || (gulixr1==v1x+v1dx*ds && guliyrl1==v1y+v1dy*ds) || (gulixr1==v1x+v1ex*ds && guliyrl1==v1y+v1ey*ds) || (gulixr1==v1x+v1fx*ds && guliyrl1==v1y+v1fy*ds) || (gulixr1==v1x+v1ix*ds && guliyrl1==v1y+v1iy*ds) || (gulixr1==v1x+v1bx*ds && guliyrl1==v1y+v1by*ds)){
	
		gulixr1=999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulixr2==v1x+v1gx*ds && guliyrl2==v1y+v1gy*ds) || (gulixr2==v1x+v1dx*ds && guliyrl2==v1y+v1dy*ds) || (gulixr2==v1x+v1ex*ds && guliyrl2==v1y+v1ey*ds) || (gulixr2==v1x+v1fx*ds && guliyrl2==v1y+v1fy*ds) || (gulixr2==v1x+v1ix*ds && guliyrl2==v1y+v1iy*ds) || (gulixr2==v1x+v1bx*ds && guliyrl2==v1y+v1by*ds)){
	
		gulixr2=999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulixr3==v1x+v1gx*ds && guliyrl3==v1y+v1gy*ds) || (gulixr3==v1x+v1dx*ds && guliyrl3==v1y+v1dy*ds) || (gulixr3==v1x+v1ex*ds && guliyrl3==v1y+v1ey*ds) || (gulixr3==v1x+v1fx*ds && guliyrl3==v1y+v1fy*ds) || (gulixr3==v1x+v1ix*ds && guliyrl3==v1y+v1iy*ds) || (gulixr3==v1x+v1bx*ds && guliyrl3==v1y+v1by*ds)){
	
		gulixr3=999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulixl1==v1x+v1gx*ds && guliyrl1==v1y+v1gy*ds) || (gulixl1==v1x+v1dx*ds && guliyrl1==v1y+v1dy*ds) || (gulixl1==v1x+v1ex*ds && guliyrl1==v1y+v1ey*ds) || (gulixl1==v1x+v1fx*ds && guliyrl1==v1y+v1fy*ds) || (gulixl1==v1x+v1ix*ds && guliyrl1==v1y+v1iy*ds) || (gulixl1==v1x+v1bx*ds && guliyrl1==v1y+v1by*ds)){
	
		gulixl1=-999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulixl2==v1x+v1gx*ds && guliyrl2==v1y+v1gy*ds) || (gulixl2==v1x+v1dx*ds && guliyrl2==v1y+v1dy*ds) || (gulixl2==v1x+v1ex*ds && guliyrl2==v1y+v1ey*ds) || (gulixl2==v1x+v1fx*ds && guliyrl2==v1y+v1fy*ds) || (gulixl2==v1x+v1ix*ds && guliyrl2==v1y+v1iy*ds) || (gulixl2==v1x+v1bx*ds && guliyrl2==v1y+v1by*ds)){
	
		gulixl2=-999;
		v1x=-9999;
		score+=5;
	
	}
	else if((gulixl3==v1x+v1gx*ds && guliyrl3==v1y+v1gy*ds) || (gulixl3==v1x+v1dx*ds && guliyrl3==v1y+v1dy*ds) || (gulixl3==v1x+v1ex*ds && guliyrl3==v1y+v1ey*ds) || (gulixl3==v1x+v1fx*ds && guliyrl3==v1y+v1fy*ds) || (gulixl3==v1x+v1ix*ds && guliyrl3==v1y+v1iy*ds) || (gulixl3==v1x+v1bx*ds && guliyrl3==v1y+v1by*ds)){
	
		gulixl3=-999;
		v1x=-9999;
		score+=5;
	
	}



	//v2
	if((gulix1==v2x+v2gx*ds && guliyu1==v2y+v2gy*ds) || (gulix1==v2x+v2dx*ds && guliyu1==v2y+v2dy*ds) || (gulix1==v2x+v2ex*ds && guliyu1==v2y+v2ey*ds) || (gulix1==v2x+v2fx*ds && guliyu1==v2y+v2fy*ds) || (gulix1==v2x+v2ix*ds && guliyu1==v2y+v2iy*ds) || (gulix1==v2x+v2bx*ds && guliyu1==v2y+v2by*ds)){
	
		guliyu1=999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulix2==v2x+v2gx*ds && guliyu2==v2y+v2gy*ds) || (gulix2==v2x+v2dx*ds && guliyu2==v2y+v2dy*ds) || (gulix2==v2x+v2ex*ds && guliyu2==v2y+v2ey*ds) || (gulix2==v2x+v2fx*ds && guliyu2==v2y+v2fy*ds) || (gulix2==v2x+v2ix*ds && guliyu2==v2y+v2iy*ds) || (gulix2==v2x+v2bx*ds && guliyu2==v2y+v2by*ds)){
	
		guliyu2=999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulix1==v2x+v2gx*ds && guliyd1==v2y+v2gy*ds) || (gulix1==v2x+v2dx*ds && guliyd1==v2y+v2dy*ds) || (gulix1==v2x+v2ex*ds && guliyd1==v2y+v2ey*ds) || (gulix1==v2x+v2fx*ds && guliyd1==v2y+v2fy*ds) || (gulix1==v2x+v2ix*ds && guliyd1==v2y+v2iy*ds) || (gulix1==v2x+v2bx*ds && guliyd1==v2y+v2by*ds)){
	
		guliyd1=-999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulix2==v2x+v2gx*ds && guliyd2==v2y+v2gy*ds) || (gulix2==v2x+v2dx*ds && guliyd2==v2y+v2dy*ds) || (gulix2==v2x+v2ex*ds && guliyd2==v2y+v2ey*ds) || (gulix2==v2x+v2fx*ds && guliyd2==v2y+v2fy*ds) || (gulix2==v2x+v2ix*ds && guliyd2==v2y+v2iy*ds) || (gulix2==v2x+v2bx*ds && guliyd2==v2y+v2by*ds)){
	
		guliyd2=-999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulixr1==v2x+v2gx*ds && guliyrl1==v2y+v2gy*ds) || (gulixr1==v2x+v2dx*ds && guliyrl1==v2y+v2dy*ds) || (gulixr1==v2x+v2ex*ds && guliyrl1==v2y+v2ey*ds) || (gulixr1==v2x+v2fx*ds && guliyrl1==v2y+v2fy*ds) || (gulixr1==v2x+v2ix*ds && guliyrl1==v2y+v2iy*ds) || (gulixr1==v2x+v2bx*ds && guliyrl1==v2y+v2by*ds)){
	
		gulixr1=999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulixr2==v2x+v2gx*ds && guliyrl2==v2y+v2gy*ds) || (gulixr2==v2x+v2dx*ds && guliyrl2==v2y+v2dy*ds) || (gulixr2==v2x+v2ex*ds && guliyrl2==v2y+v2ey*ds) || (gulixr2==v2x+v2fx*ds && guliyrl2==v2y+v2fy*ds) || (gulixr2==v2x+v2ix*ds && guliyrl2==v2y+v2iy*ds) || (gulixr2==v2x+v2bx*ds && guliyrl2==v2y+v2by*ds)){
	
		gulixr2=999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulixr3==v2x+v2gx*ds && guliyrl3==v2y+v2gy*ds) || (gulixr3==v2x+v2dx*ds && guliyrl3==v2y+v2dy*ds) || (gulixr3==v2x+v2ex*ds && guliyrl3==v2y+v2ey*ds) || (gulixr3==v2x+v2fx*ds && guliyrl3==v2y+v2fy*ds) || (gulixr3==v2x+v2ix*ds && guliyrl3==v2y+v2iy*ds) || (gulixr3==v2x+v2bx*ds && guliyrl3==v2y+v2by*ds)){
	
		gulixr3=999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulixl1==v2x+v2gx*ds && guliyrl1==v2y+v2gy*ds) || (gulixl1==v2x+v2dx*ds && guliyrl1==v2y+v2dy*ds) || (gulixl1==v2x+v2ex*ds && guliyrl1==v2y+v2ey*ds) || (gulixl1==v2x+v2fx*ds && guliyrl1==v2y+v2fy*ds) || (gulixl1==v2x+v2ix*ds && guliyrl1==v2y+v2iy*ds) || (gulixl1==v2x+v2bx*ds && guliyrl1==v2y+v2by*ds)){
	
		gulixl1=-999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulixl2==v2x+v2gx*ds && guliyrl2==v2y+v2gy*ds) || (gulixl2==v2x+v2dx*ds && guliyrl2==v2y+v2dy*ds) || (gulixl2==v2x+v2ex*ds && guliyrl2==v2y+v2ey*ds) || (gulixl2==v2x+v2fx*ds && guliyrl2==v2y+v2fy*ds) || (gulixl2==v2x+v2ix*ds && guliyrl2==v2y+v2iy*ds) || (gulixl2==v2x+v2bx*ds && guliyrl2==v2y+v2by*ds)){
	
		gulixl2=-999;
		v2x=-9999;
		score+=5;
	
	}
	else if((gulixl3==v2x+v2gx*ds && guliyrl3==v2y+v2gy*ds) || (gulixl3==v2x+v2dx*ds && guliyrl3==v2y+v2dy*ds) || (gulixl3==v2x+v2ex*ds && guliyrl3==v2y+v2ey*ds) || (gulixl3==v2x+v2fx*ds && guliyrl3==v2y+v2fy*ds) || (gulixl3==v2x+v2ix*ds && guliyrl3==v2y+v2iy*ds) || (gulixl3==v2x+v2bx*ds && guliyrl3==v2y+v2by*ds)){
	
		gulixl3=-999;
		v2x=-9999;
		score+=5;
	
	}





	//v3
	if((gulix1==v3x+v3gx*ds && guliyu1==v3y+v3gy*ds) || (gulix1==v3x+v3dx*ds && guliyu1==v3y+v3dy*ds) || (gulix1==v3x+v3ex*ds && guliyu1==v3y+v3ey*ds) || (gulix1==v3x+v3fx*ds && guliyu1==v3y+v3fy*ds) || (gulix1==v3x+v3ix*ds && guliyu1==v3y+v3iy*ds) || (gulix1==v3x+v3bx*ds && guliyu1==v3y+v3by*ds)){
	
		guliyu1=999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulix2==v3x+v3gx*ds && guliyu2==v3y+v3gy*ds) || (gulix2==v3x+v3dx*ds && guliyu2==v3y+v3dy*ds) || (gulix2==v3x+v3ex*ds && guliyu2==v3y+v3ey*ds) || (gulix2==v3x+v3fx*ds && guliyu2==v3y+v3fy*ds) || (gulix2==v3x+v3ix*ds && guliyu2==v3y+v3iy*ds) || (gulix2==v3x+v3bx*ds && guliyu2==v3y+v3by*ds)){
	
		guliyu2=999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulix1==v3x+v3gx*ds && guliyd1==v3y+v3gy*ds) || (gulix1==v3x+v3dx*ds && guliyd1==v3y+v3dy*ds) || (gulix1==v3x+v3ex*ds && guliyd1==v3y+v3ey*ds) || (gulix1==v3x+v3fx*ds && guliyd1==v3y+v3fy*ds) || (gulix1==v3x+v3ix*ds && guliyd1==v3y+v3iy*ds) || (gulix1==v3x+v3bx*ds && guliyd1==v3y+v3by*ds)){
	
		guliyd1=-999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulix2==v3x+v3gx*ds && guliyd2==v3y+v3gy*ds) || (gulix2==v3x+v3dx*ds && guliyd2==v3y+v3dy*ds) || (gulix2==v3x+v3ex*ds && guliyd2==v3y+v3ey*ds) || (gulix2==v3x+v3fx*ds && guliyd2==v3y+v3fy*ds) || (gulix2==v3x+v3ix*ds && guliyd2==v3y+v3iy*ds) || (gulix2==v3x+v3bx*ds && guliyd2==v3y+v3by*ds)){
	
		guliyd2=-999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulixr1==v3x+v3gx*ds && guliyrl1==v3y+v3gy*ds) || (gulixr1==v3x+v3dx*ds && guliyrl1==v3y+v3dy*ds) || (gulixr1==v3x+v3ex*ds && guliyrl1==v3y+v3ey*ds) || (gulixr1==v3x+v3fx*ds && guliyrl1==v3y+v3fy*ds) || (gulixr1==v3x+v3ix*ds && guliyrl1==v3y+v3iy*ds) || (gulixr1==v3x+v3bx*ds && guliyrl1==v3y+v3by*ds)){
	
		gulixr1=999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulixr2==v3x+v3gx*ds && guliyrl2==v3y+v3gy*ds) || (gulixr2==v3x+v3dx*ds && guliyrl2==v3y+v3dy*ds) || (gulixr2==v3x+v3ex*ds && guliyrl2==v3y+v3ey*ds) || (gulixr2==v3x+v3fx*ds && guliyrl2==v3y+v3fy*ds) || (gulixr2==v3x+v3ix*ds && guliyrl2==v3y+v3iy*ds) || (gulixr2==v3x+v3bx*ds && guliyrl2==v3y+v3by*ds)){
	
		gulixr2=999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulixr3==v3x+v3gx*ds && guliyrl3==v3y+v3gy*ds) || (gulixr3==v3x+v3dx*ds && guliyrl3==v3y+v3dy*ds) || (gulixr3==v3x+v3ex*ds && guliyrl3==v3y+v3ey*ds) || (gulixr3==v3x+v3fx*ds && guliyrl3==v3y+v3fy*ds) || (gulixr3==v3x+v3ix*ds && guliyrl3==v3y+v3iy*ds) || (gulixr3==v3x+v3bx*ds && guliyrl3==v3y+v3by*ds)){
	
		gulixr3=999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulixl1==v3x+v3gx*ds && guliyrl1==v3y+v3gy*ds) || (gulixl1==v3x+v3dx*ds && guliyrl1==v3y+v3dy*ds) || (gulixl1==v3x+v3ex*ds && guliyrl1==v3y+v3ey*ds) || (gulixl1==v3x+v3fx*ds && guliyrl1==v3y+v3fy*ds) || (gulixl1==v3x+v3ix*ds && guliyrl1==v3y+v3iy*ds) || (gulixl1==v3x+v3bx*ds && guliyrl1==v3y+v3by*ds)){
	
		gulixl1=-999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulixl2==v3x+v3gx*ds && guliyrl2==v3y+v3gy*ds) || (gulixl2==v3x+v3dx*ds && guliyrl2==v3y+v3dy*ds) || (gulixl2==v3x+v3ex*ds && guliyrl2==v3y+v3ey*ds) || (gulixl2==v3x+v3fx*ds && guliyrl2==v3y+v3fy*ds) || (gulixl2==v3x+v3ix*ds && guliyrl2==v3y+v3iy*ds) || (gulixl2==v3x+v3bx*ds && guliyrl2==v3y+v3by*ds)){
	
		gulixl2=-999;
		v3x=-9999;
		score+=5;
	
	}
	else if((gulixl3==v3x+v3gx*ds && guliyrl3==v3y+v3gy*ds) || (gulixl3==v3x+v3dx*ds && guliyrl3==v3y+v3dy*ds) || (gulixl3==v3x+v3ex*ds && guliyrl3==v3y+v3ey*ds) || (gulixl3==v3x+v3fx*ds && guliyrl3==v3y+v3fy*ds) || (gulixl3==v3x+v3ix*ds && guliyrl3==v3y+v3iy*ds) || (gulixl3==v3x+v3bx*ds && guliyrl3==v3y+v3by*ds)){
	
		gulixl3=-999;
		v3x=-9999;
		score+=5;
	
	}





	//v4
	if((gulix1==v4x+v4gx*ds && guliyu1==v4y+v4gy*ds) || (gulix1==v4x+v4dx*ds && guliyu1==v4y+v4dy*ds) || (gulix1==v4x+v4ex*ds && guliyu1==v4y+v4ey*ds) || (gulix1==v4x+v4fx*ds && guliyu1==v4y+v4fy*ds) || (gulix1==v4x+v4ix*ds && guliyu1==v4y+v4iy*ds) || (gulix1==v4x+v4bx*ds && guliyu1==v4y+v4by*ds)){
	
		guliyu1=999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulix2==v4x+v4gx*ds && guliyu2==v4y+v4gy*ds) || (gulix2==v4x+v4dx*ds && guliyu2==v4y+v4dy*ds) || (gulix2==v4x+v4ex*ds && guliyu2==v4y+v4ey*ds) || (gulix2==v4x+v4fx*ds && guliyu2==v4y+v4fy*ds) || (gulix2==v4x+v4ix*ds && guliyu2==v4y+v4iy*ds) || (gulix2==v4x+v4bx*ds && guliyu2==v4y+v4by*ds)){
	
		guliyu2=999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulix1==v4x+v4gx*ds && guliyd1==v4y+v4gy*ds) || (gulix1==v4x+v4dx*ds && guliyd1==v4y+v4dy*ds) || (gulix1==v4x+v4ex*ds && guliyd1==v4y+v4ey*ds) || (gulix1==v4x+v4fx*ds && guliyd1==v4y+v4fy*ds) || (gulix1==v4x+v4ix*ds && guliyd1==v4y+v4iy*ds) || (gulix1==v4x+v4bx*ds && guliyd1==v4y+v4by*ds)){
	
		guliyd1=-999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulix2==v4x+v4gx*ds && guliyd2==v4y+v4gy*ds) || (gulix2==v4x+v4dx*ds && guliyd2==v4y+v4dy*ds) || (gulix2==v4x+v4ex*ds && guliyd2==v4y+v4ey*ds) || (gulix2==v4x+v4fx*ds && guliyd2==v4y+v4fy*ds) || (gulix2==v4x+v4ix*ds && guliyd2==v4y+v4iy*ds) || (gulix2==v4x+v4bx*ds && guliyd2==v4y+v4by*ds)){
	
		guliyd2=-999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulixr1==v4x+v4gx*ds && guliyrl1==v4y+v4gy*ds) || (gulixr1==v4x+v4dx*ds && guliyrl1==v4y+v4dy*ds) || (gulixr1==v4x+v4ex*ds && guliyrl1==v4y+v4ey*ds) || (gulixr1==v4x+v4fx*ds && guliyrl1==v4y+v4fy*ds) || (gulixr1==v4x+v4ix*ds && guliyrl1==v4y+v4iy*ds) || (gulixr1==v4x+v4bx*ds && guliyrl1==v4y+v4by*ds)){
	
		gulixr1=999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulixr2==v4x+v4gx*ds && guliyrl2==v4y+v4gy*ds) || (gulixr2==v4x+v4dx*ds && guliyrl2==v4y+v4dy*ds) || (gulixr2==v4x+v4ex*ds && guliyrl2==v4y+v4ey*ds) || (gulixr2==v4x+v4fx*ds && guliyrl2==v4y+v4fy*ds) || (gulixr2==v4x+v4ix*ds && guliyrl2==v4y+v4iy*ds) || (gulixr2==v4x+v4bx*ds && guliyrl2==v4y+v4by*ds)){
	
		gulixr2=999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulixr3==v4x+v4gx*ds && guliyrl3==v4y+v4gy*ds) || (gulixr3==v4x+v4dx*ds && guliyrl3==v4y+v4dy*ds) || (gulixr3==v4x+v4ex*ds && guliyrl3==v4y+v4ey*ds) || (gulixr3==v4x+v4fx*ds && guliyrl3==v4y+v4fy*ds) || (gulixr3==v4x+v4ix*ds && guliyrl3==v4y+v4iy*ds) || (gulixr3==v4x+v4bx*ds && guliyrl3==v4y+v4by*ds)){
	
		gulixr3=999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulixl1==v4x+v4gx*ds && guliyrl1==v4y+v4gy*ds) || (gulixl1==v4x+v4dx*ds && guliyrl1==v4y+v4dy*ds) || (gulixl1==v4x+v4ex*ds && guliyrl1==v4y+v4ey*ds) || (gulixl1==v4x+v4fx*ds && guliyrl1==v4y+v4fy*ds) || (gulixl1==v4x+v4ix*ds && guliyrl1==v4y+v4iy*ds) || (gulixl1==v4x+v4bx*ds && guliyrl1==v4y+v4by*ds)){
	
		gulixl1=-999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulixl2==v4x+v4gx*ds && guliyrl2==v4y+v4gy*ds) || (gulixl2==v4x+v4dx*ds && guliyrl2==v4y+v4dy*ds) || (gulixl2==v4x+v4ex*ds && guliyrl2==v4y+v4ey*ds) || (gulixl2==v4x+v4fx*ds && guliyrl2==v4y+v4fy*ds) || (gulixl2==v4x+v4ix*ds && guliyrl2==v4y+v4iy*ds) || (gulixl2==v4x+v4bx*ds && guliyrl2==v4y+v4by*ds)){
	
		gulixl2=-999;
		v4x=-9999;
		score+=5;
	
	}
	else if((gulixl3==v4x+v4gx*ds && guliyrl3==v4y+v4gy*ds) || (gulixl3==v4x+v4dx*ds && guliyrl3==v4y+v4dy*ds) || (gulixl3==v4x+v4ex*ds && guliyrl3==v4y+v4ey*ds) || (gulixl3==v4x+v4fx*ds && guliyrl3==v4y+v4fy*ds) || (gulixl3==v4x+v4ix*ds && guliyrl3==v4y+v4iy*ds) || (gulixl3==v4x+v4bx*ds && guliyrl3==v4y+v4by*ds)){
	
		gulixl3=-999;
		v4x=-9999;
		score+=5;
	
	}










	//guli-guli

	//v1

	if(gulix1==v1gulix && guliyu1==v1guliy){
	
		guliyu1=999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulix2==v1gulix && guliyu2==v1guliy){
	
		guliyu2=999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulix1==v1gulix && guliyd1==v1guliy){
	
		guliyd1=-999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulix2==v1gulix && guliyd2==v1guliy){
	
		guliyd2=-999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulixr1==v1gulix && guliyrl1==v1guliy){
	
		gulixr1=999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulixr2==v1gulix && guliyrl2==v1guliy){
	
		gulixr2=999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulixr3==v1gulix && guliyrl3==v1guliy){
	
		gulixr3=999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulixl1==v1gulix && guliyrl1==v1guliy){
	
		gulixl1=-999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulixl2==v1gulix && guliyrl2==v1guliy){
	
		gulixl2=-999;
		v1gulix=-9999;
		score+=3;

	}
	else if(gulixl3==v1gulix && guliyrl3==v1guliy){
	
		gulixl3=-999;
		v1gulix=-9999;
		score+=3;

	}

	//v2

	if(gulix1==v2gulix && guliyu1==v2guliy){
	
		guliyu1=999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulix2==v2gulix && guliyu2==v2guliy){
	
		guliyu2=999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulix1==v2gulix && guliyd1==v2guliy){
	
		guliyd1=-999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulix2==v2gulix && guliyd2==v2guliy){
	
		guliyd2=-999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulixr1==v2gulix && guliyrl1==v2guliy){
	
		gulixr1=999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulixr2==v2gulix && guliyrl2==v2guliy){
	
		gulixr2=999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulixr3==v2gulix && guliyrl3==v2guliy){
	
		gulixr3=999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulixl1==v2gulix && guliyrl1==v2guliy){
	
		gulixl1=-999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulixl2==v2gulix && guliyrl2==v2guliy){
	
		gulixl2=-999;
		v2gulix=-9999;
		score+=3;

	}
	else if(gulixl3==v2gulix && guliyrl3==v2guliy){
	
		gulixl3=-999;
		v2gulix=-9999;
		score+=3;

	}

	//v3

	if(gulix1==v3gulix && guliyu1==v3guliy){
	
		guliyu1=999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulix2==v3gulix && guliyu2==v3guliy){
	
		guliyu2=999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulix1==v3gulix && guliyd1==v3guliy){
	
		guliyd1=-999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulix2==v3gulix && guliyd2==v3guliy){
	
		guliyd2=-999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulixr1==v3gulix && guliyrl1==v3guliy){
	
		gulixr1=999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulixr2==v3gulix && guliyrl2==v3guliy){
	
		gulixr2=999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulixr3==v3gulix && guliyrl3==v3guliy){
	
		gulixr3=999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulixl1==v3gulix && guliyrl1==v3guliy){
	
		gulixl1=-999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulixl2==v3gulix && guliyrl2==v3guliy){
	
		gulixl2=-999;
		v3gulix=-9999;
		score+=3;

	}
	else if(gulixl3==v3gulix && guliyrl3==v3guliy){
	
		gulixl3=-999;
		v3gulix=-9999;
		score+=3;

	}

	//v4
	
	if(gulix1==v4gulix && guliyu1==v4guliy){
	
		guliyu1=999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulix2==v4gulix && guliyu2==v4guliy){
	
		guliyu2=999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulix1==v4gulix && guliyd1==v4guliy){
	
		guliyd1=-999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulix2==v4gulix && guliyd2==v4guliy){
	
		guliyd2=-999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulixr1==v4gulix && guliyrl1==v4guliy){
	
		gulixr1=999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulixr2==v4gulix && guliyrl2==v4guliy){
	
		gulixr2=999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulixr3==v4gulix && guliyrl3==v4guliy){
	
		gulixr3=999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulixl1==v4gulix && guliyrl1==v4guliy){
	
		gulixl1=-999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulixl2==v4gulix && guliyrl2==v4guliy){
	
		gulixl2=-999;
		v4gulix=-9999;
		score+=3;

	}
	else if(gulixl3==v4gulix && guliyrl3==v4guliy){
	
		gulixl3=-999;
		v4gulix=-9999;
		score+=3;

	}


	//nayok 

	//v1
	if((v1gulix==x+gx*ds && v1guliy==y+gy*ds) || (v1gulix==x+dx*ds && v1guliy==y+dy*ds) || (v1gulix==x+ex*ds && v1guliy==y+ey*ds) || (v1gulix==x+fx*ds && v1guliy==y+fy*ds) || (v1gulix==x+bx*ds && v1guliy==y+by*ds) || (v1gulix==x+ix*ds && v1guliy==y+iy*ds)){
	
		blst=1;
		blsttmr=1;
		v1gulix=-9999;
		life--;

	
	}
	//v2
	else if((v2gulix==x+gx*ds && v2guliy==y+gy*ds) || (v2gulix==x+dx*ds && v2guliy==y+dy*ds) || (v2gulix==x+ex*ds && v2guliy==y+ey*ds) || (v2gulix==x+fx*ds && v2guliy==y+fy*ds) || (v2gulix==x+bx*ds && v2guliy==y+by*ds) || (v2gulix==x+ix*ds && v2guliy==y+iy*ds)){
	
		blst=1;
		blsttmr=1;
		v2gulix=-9999;
		life--;
	
	}
	//v3
	else if((v3gulix==x+gx*ds && v3guliy==y+gy*ds) || (v3gulix==x+dx*ds && v3guliy==y+dy*ds) || (v3gulix==x+ex*ds && v3guliy==y+ey*ds) || (v3gulix==x+fx*ds && v3guliy==y+fy*ds) || (v3gulix==x+bx*ds && v3guliy==y+by*ds) || (v3gulix==x+ix*ds && v3guliy==y+iy*ds)){
	
		blst=1;
		blsttmr=1;
		v3gulix=-9999;
		life--;
	
	}
	//v4
	else if((v4gulix==x+gx*ds && v4guliy==y+gy*ds) || (v4gulix==x+dx*ds && v4guliy==y+dy*ds) || (v4gulix==x+ex*ds && v4guliy==y+ey*ds) || (v4gulix==x+fx*ds && v4guliy==y+fy*ds) || (v4gulix==x+bx*ds && v4guliy==y+by*ds) || (v4gulix==x+ix*ds && v4guliy==y+iy*ds)){
	
		blst=1;
		blsttmr=1;
		v4gulix=-9999;
		life--;
	
	}


}



int main()
{

	iSetTimer(300,gndmv1);
	iSetTimer(300+20,gndmv2);
	iSetTimer(300+40,gndmv3);
	iSetTimer(300+60,gndmv4);
	
	iSetTimer(0,bllt);
	iSetTimer(50,nyksguli);
	iSetTimer(100,vguli);
	

	iSetTimer(50,check);
	iSetTimer(200,intrfccount);


	iInitialize(968, 450,"Brick Game: Tank Classic");

	return 0;

}