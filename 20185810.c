#include <stdio.h>
#include <stdlib.h>

struct _Birth {
	int year;
	int month;
	int day;
}typedef Birth;

struct _statement {
	char name[20];
	Birth birth;
	char sex[6];
	char address[100];
	char phnum[15];
}typedef statement;

int main() {
	int n = 0, i = 0, j = 0;
	statement person[11];

	printf("개인 명세표를 입력하세요!(엔터[enter]로 구분)\n");                                    //명세표 받기_시작
	for (n = 0; n < 10; n++) {
		printf("입력하려면 1, 종료하려면 0을 입력해주세요ㅎ ");
		scanf_s("%d", &i);
		if (i == 0)
			break;
		else if (i == 1) {
			puts("이름, 생년,	생월,	생일,	성별,	주소,	핸드폰번호");
			scanf("%s", person[n].name);
			scanf("%d", &person[n].birth.year);
			scanf("%d", &person[n].birth.month);
			scanf("%d", &person[n].birth.day);
			scanf("%s", person[n].sex);
			scanf("%s", person[n].address);
			scanf("%s", person[n].phnum);
		}
	}                                                                                           //명세표 받기_끝
  
	puts("기본출력 \n이름, 	생년,	생월,	생일,	성별,	주소,			핸드폰번호");                         //기본출력_시작
	for (j = 0; j < n; j++) {
		printf("%s	", person[j].name);
		printf("%d.	%d.	%d.	", person[j].birth.year, person[j].birth.month, person[j].birth.day); 
		printf("%s	", person[j].sex);
		printf("%s		", person[j].address);
		printf("%s	\n", person[j].phnum);
	}                                                                                           //기본출력_끝

	int a = 20, b = 20, c = 20, d = 20, e = 20, f = 20, g = 20, h = 20, x = 20, y = 20, z=0;    //이름순서 배열_시작
	if (z < n) {                                                                                //원리 : 
		if (strcmp(person[0].name, person[1].name) > 0)                                           //a~h,x,y에 1~10의 명세표 대입
			a = 1, b = 0;                                                                           //이때, 1~10의 순서를 고쳐서 대입
		else                                                                                      //출력시 a~h,x,y 순서로 출력하면
			a = 0, b = 1;                                                                           //정렬된 순서로 
		z++;
	}
	if (z < n) {
		if (strcmp(person[a].name, person[2].name) > 0)
			c = b, b = a, a = 2;
		else {
			if (strcmp(person[b].name, person[2].name) > 0)
				c = b, b = 2;
			else
				c = 2;
		}
		z++;
	}
	if (z < n) {
		if (strcmp(person[a].name, person[3].name) > 0)
			d = c, c = b, b = a, a = 3;
		else {
			if (strcmp(person[b].name, person[3].name) > 0)
				d = c, c = b, b = 3;
			else {
				if (strcmp(person[c].name, person[3].name) > 0)
					d = c, c = 3;
				else
					d = 3;
			}
		}
		z++;
	}
	if (z < n) {
		if (strcmp(person[a].name, person[4].name) > 0)
			e = d, d = c, c = b, b = a, a = 4;
		else {
			if (strcmp(person[b].name, person[4].name) > 0)
				e = d, d = c, c = b, b = 4;
			else {
				if (strcmp(person[c].name, person[4].name) > 0)
					e = d, d = c, c = 4;
				else {
					if (strcmp(person[d].name, person[4].name) > 0)
						e = d, d = 4;
					else
						e = 4;
				}
			}
		}
		z++;
	}
	if (z < n) {
		if (strcmp(person[a].name, person[5].name) > 0)
			f = e, e = d, d = c, c = b, b = a, a = 5;
		else {
			if (strcmp(person[b].name, person[5].name) > 0)
				f = e, e = d, d = c, c = b, b = 5;
			else {
				if (strcmp(person[c].name, person[5].name) > 0)
					f = e, e = d, d = c, c = 5;
				else {
					if (strcmp(person[d].name, person[5].name) > 0)
						f = e, e = d, d = 5;
					else {
						if (strcmp(person[e].name, person[5].name) > 0)
							f = e, e = 5;
						else
							e = 5;
					}
				}
			}
		}
		z++;
	}
	if (z < n) {
		if (strcmp(person[a].name, person[6].name) > 0)
			g = f, f = e, e = d, d = c, c = b, b = a, a = 6;
		else {
			if (strcmp(person[b].name, person[6].name) > 0)
				g = f, f = e, e = d, d = c, c = b, b = 6;
			else {
				if (strcmp(person[c].name, person[6].name) > 0)
					g = f, f = e, e = d, d = c, c = 6;
				else {
					if (strcmp(person[d].name, person[6].name) > 0)
						g = f, f = e, e = d, d = 6;
					else {
						if (strcmp(person[e].name, person[6].name) > 0)
							g = f, f = e, e = 6;
						else {
							if (strcmp(person[f].name, person[6].name) > 0)
								g = f, f = 6;
							else
								g = 6;
						}
					}
				}
			}
		}
		z++;
	}
	if (z < n) {
		if (strcmp(person[a].name, person[7].name) > 0) 
			h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 7;
		else {
			if (strcmp(person[b].name, person[7].name) > 0)
				h = g, g = f, f = e, e = d, d = c, c = b, b = 7;
			else {
				if (strcmp(person[c].name, person[7].name) > 0)
					h = g, g = f, f = e, e = d, d = c, c = 7;
				else {
					if (strcmp(person[d].name, person[7].name) > 0)
						h = g, g = f, f = e, e = d, d = 7;
					else {
						if (strcmp(person[e].name, person[7].name) > 0)
							h = g, g = f, f = e, e = 7;
						else {
							if (strcmp(person[f].name, person[7].name) > 0)
								h = g, g = f, f = 7;
							else {
								if (strcmp(person[g].name, person[7].name) > 0)
									h = g, g = 7;
								else
									h = 7;
							}
						}
					}
				}
			}
		}
		z++;
	}
	if (z < n) {
		if (strcmp(person[a].name, person[8].name) > 0)
			x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 8;
		else {
			if (strcmp(person[b].name, person[8].name) > 0)
				x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = 8;
			else {
				if (strcmp(person[c].name, person[8].name) > 0)
					x = h, h = g, g =f, f = e, e = d, d = c, c = 8;
				else {
					if (strcmp(person[d].name, person[8].name) > 0)
						x = h, h = g, g = f, f = e, e = d, d = 8;
					else {
						if (strcmp(person[e].name, person[8].name) > 0)
							x = h, h = g, g = f, f = e, e = 8;
						else {
							if (strcmp(person[f].name, person[8].name) > 0)
								x = h, h = g, g = f, f = 8;
							else{
								if (strcmp(person[g].name, person[8].name) > 0)
									x = h, h = g, g = 8;
								else {
									if (strcmp(person[h].name, person[8].name) > 0)
										x = h, h = 8;
									else
										x = 8;
								}
							}
						}
					}
				}
			}
		}
		z++;
	}
	if (z < n) {
		if (strcmp(person[a].name, person[9].name) > 0)
			y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 9;
		else {
			if (strcmp(person[b].name, person[9].name) > 0)
				y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = 9;
			else {
				if (strcmp(person[c].name, person[9].name) > 0)
					y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = 9;
				else {
					if (strcmp(person[d].name, person[9].name) > 0)
						y = x, x = h, h = g, g = f, f = e, e = d, d = 9;
					else {
						if (strcmp(person[e].name, person[9].name) > 0)
							y = x, x = h, h = g, g = f, f = e, e = 9;
						else {
							if (strcmp(person[f].name, person[9].name) > 0)
								y = x, x = h, h = g, g = f, f = 9;
							else {
								if (strcmp(person[g].name, person[9].name) > 0)
									y = x, x = h, h = g, g = 9;
								else {
									if (strcmp(person[h].name, person[9].name) > 0)
										y = x, x = h, h = 9;
									else {
										if (strcmp(person[x].name, person[9].name) > 0)
											y = x, x = 9;
										else
											y = 9;
									}
								}
							}
						}
					}
				}
			}
		}
		z++;
	}                                                                                           //이름순서 배열_끝
	z = 0;                                                                      
	puts("이름 내림차순 출력\n이름, 	생년,	생월,	생일,	성별,	주소,			핸드폰번호");                //이름 내림차순 출력_시작
	if (z < n) {
		z++;
		printf("%s	", person[a].name);
		printf("%d.	%d.	%d.	", person[a].birth.year, person[a].birth.month, person[a].birth.day);
		printf("%s	", person[a].sex);
		printf("%s		", person[a].address);
		printf("%s	\n", person[a].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[b].name);
		printf("%d.	%d.	%d.	", person[b].birth.year, person[b].birth.month, person[b].birth.day);
		printf("%s	", person[b].sex);
		printf("%s		", person[b].address);
		printf("%s	\n", person[b].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[c].name);
		printf("%d.	%d.	%d.	", person[c].birth.year, person[c].birth.month, person[c].birth.day);
		printf("%s	", person[c].sex);
		printf("%s		", person[c].address);
		printf("%s	\n", person[c].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[d].name);
		printf("%d.	%d.	%d.	", person[d].birth.year, person[d].birth.month, person[d].birth.day);
		printf("%s	", person[d].sex);
		printf("%s		", person[d].address);
		printf("%s	\n", person[d].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[e].name);
		printf("%d.	%d.	%d.	", person[e].birth.year, person[e].birth.month, person[e].birth.day);
		printf("%s	", person[e].sex);
		printf("%s		", person[e].address);
		printf("%s	\n", person[e].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[f].name);
		printf("%d.	%d.	%d.	", person[f].birth.year, person[f].birth.month, person[f].birth.day);
		printf("%s	", person[f].sex);
		printf("%s		", person[f].address);
		printf("%s	\n", person[f].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[g].name);
		printf("%d.	%d.	%d.	", person[g].birth.year, person[g].birth.month, person[g].birth.day);
		printf("%s	", person[g].sex);
		printf("%s		", person[g].address);
		printf("%s	\n", person[g].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[h].name);
		printf("%d.	%d.	%d.	", person[h].birth.year, person[h].birth.month, person[h].birth.day);
		printf("%s	", person[h].sex);
		printf("%s		", person[h].address);
		printf("%s	\n", person[h].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[x].name);
		printf("%d.	%d.	%d.	", person[x].birth.year, person[x].birth.month, person[x].birth.day);
		printf("%s	", person[x].sex);
		printf("%s		", person[x].address);
		printf("%s	\n", person[x].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[y].name);
		printf("%d.	%d.	%d.	", person[y].birth.year, person[y].birth.month, person[y].birth.day);
		printf("%s	", person[y].sex);
		printf("%s		", person[y].address);
		printf("%s	\n", person[y].phnum);
	}                                                                                           //이름 내림차순 출력_끝

	a = 20, b = 20, c = 20, d = 20, e = 20, f = 20, g = 20, h = 20, x = 20, y = 20, z = 0;      //생년원일 올림차순 정렬_시작
	int sum[10];
	if (z < n) {
		sum[0] = 10000 * person[0].birth.year + 100 * person[0].birth.month + person[0].birth.day;
		sum[1] = 10000 * person[1].birth.year + 100 * person[1].birth.month + person[1].birth.day;
		if (sum[0]<sum[1])
			a = 1, b = 0;
		else
			a = 0, b = 1;
		z++;
	}
	if (z < n) {
		sum[2] = 10000 * person[2].birth.year + 100 * person[2].birth.month + person[2].birth.day;
		if (sum[a]<sum[2])
			c = b, b = a, a = 2;
		else {
			if (sum[b]<sum[2])
				c = b, b = 2;
			else
				c = 2;
		}
		z++;
	}
	if (z < n) {
		sum[3] = 10000 * person[3].birth.year + 100 * person[3].birth.month + person[3].birth.day;
		if (sum[a]<sum[3])
			d = c, c = b, b = a, a = 3;
		else {
			if (sum[b]<sum[3])
				d = c, c = b, b = 3;
			else {
				if (sum[c]<sum[3])
					d = c, c = 3;
				else
					d = 3;
			}
		}
		z++;
	}
	if (z < n) {
		sum[4] = 10000 * person[4].birth.year + 100 * person[4].birth.month + person[4].birth.day;
		if (sum[a]<sum[4])
			e = d, d = c, c = b, b = a, a = 4;
		else {
			if (sum[b]<sum[4])
				e = d, d = c, c = b, b = 4;
			else {
				if (sum[c]<sum[4])
					e = d, d = c, c = 4;
				else {
					if (sum[d]<sum[4])
						e = d, d = 4;
					else
						e = 4;
				}
			}
		}
		z++;
	}
	if (z < n) {
		sum[5] = 10000 * person[5].birth.year + 100 * person[5].birth.month + person[5].birth.day;
		if (sum[a]<sum[5])
			f = e, e = d, d = c, c = b, b = a, a = 5;
		else {
			if (sum[b]<sum[5])
				f = e, e = d, d = c, c = b, b = 5;
			else {
				if (sum[c]<sum[5])
					f = e, e = d, d = c, c = 5;
				else {
					if (sum[d]<sum[5])
						f = e, e = d, d = 5;
					else {
						if (sum[e]<sum[5])
							f = e, e = 5;
						else
							e = 5;
					}
				}
			}
		}
		z++;
	}
	if (z < n) {
		sum[6] = 10000 * person[6].birth.year + 100 * person[6].birth.month + person[6].birth.day;
		if (sum[a]<sum[6])
			g = f, f = e, e = d, d = c, c = b, b = a, a = 6;
		else {
			if (sum[b]<sum[6])
				g = f, f = e, e = d, d = c, c = b, b = 6;
			else {
				if (sum[c]<sum[6])
					g = f, f = e, e = d, d = c, c = 6;
				else {
					if (sum[d]<sum[6])
						g = f, f = e, e = d, d = 6;
					else {
						if (sum[e]<sum[6])
							g = f, f = e, e = 6;
						else {
							if (sum[f]<sum[6])
								g = f, f = 6;
							else
								g = 6;
						}
					}
				}
			}
		}
		z++;
	}
	if (z < n) {
		sum[7] = 10000 * person[7].birth.year + 100 * person[7].birth.month + person[7].birth.day;
		if (sum[a]<sum[7])
			h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 7;
		else {
			if (sum[b]<sum[7])
				h = g, g = f, f = e, e = d, d = c, c = b, b = 7;
			else {
				if (sum[c]<sum[7])
					h = g, g = f, f = e, e = d, d = c, c = 7;
				else {
					if (sum[d]<sum[7])
						h = g, g = f, f = e, e = d, d = 7;
					else {
						if (sum[e]<sum[7])
							h = g, g = f, f = e, e = 7;
						else {
							if (sum[f]<sum[7])
								h = g, g = f, f = 7;
							else {
								if (sum[g] < sum[7])
									h = g, g = 7;
								else
									h = 7;
							}
						}
					}
				}
			}
		}
		z++;
	}
	if (z < n) {
		sum[8] = 10000 * person[8].birth.year + 100 * person[8].birth.month + person[8].birth.day;
		if (sum[a]<sum[8])
			x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 8;
		else {
			if (sum[b]<sum[8])
				x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = 8;
			else {
				if (sum[c]<sum[8])
					x = h, h = g, g = f, f = e, e = d, d = c, c = 8;
				else {
					if (sum[d]<sum[8])
						x = h, h = g, g = f, f = e, e = d, d = 8;
					else {
						if (sum[e]<sum[8])
							x = h, h = g, g = f, f = e, e = 8;
						else {
							if (sum[f]<sum[8])
								x = h, h = g, g = f, f = 8;
							else {
								if (sum[g]<sum[8])
									x = h, h = g, g = 8;
								else {
									if (sum[h]<sum[8])
										x = h, h = 8;
									else
										x = 8;
								}
							}
						}
					}
				}
			}
		}
		z++;
	}
	if (z < n) {
		sum[9] = 10000 * person[9].birth.year + 100 * person[9].birth.month + person[9].birth.day;
		if (sum[a]<sum[9])
			y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 9;
		else {
			if (sum[b]<sum[9])
				y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = 9;
			else {
				if (sum[c]<sum[9])
					y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = 9;
				else {
					if (sum[d]<sum[9])
						y = x, x = h, h = g, g = f, f = e, e = d, d = 9;
					else {
						if (sum[e]<sum[9])
							y = x, x = h, h = g, g = f, f = e, e = 9;
						else {
							if (sum[f]<sum[9])
								y = x, x = h, h = g, g = f, f = 9;
							else {
								if (sum[g]<sum[9])
									y = x, x = h, h = g, g = 9;
								else {
									if (sum[h]<sum[9])
										y = x, x = h, h = 9;
									else {
										if (sum[x]<sum[9])
											y = x, x = 9;
										else
											y = 9;
									}
								}
							}
						}
					}
				}
			}
		}
		z++;
	}                                                                                           //생년일 올림차순 정렬_끝
	z = 0;
	puts("생년월일 올림차순 출력\n이름, 	생년,	생월,	생일,	성별,	주소,			핸드폰번호");            //생년월일 올림차순 출력_시작
	if (z < n) {
		z++;
		printf("%s	", person[a].name);
		printf("%d.	%d.	%d.	", person[a].birth.year, person[a].birth.month, person[a].birth.day);
		printf("%s	", person[a].sex);
		printf("%s		", person[a].address);
		printf("%s	\n", person[a].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[b].name);
		printf("%d.	%d.	%d.	", person[b].birth.year, person[b].birth.month, person[b].birth.day);
		printf("%s	", person[b].sex);
		printf("%s		", person[b].address);
		printf("%s	\n", person[b].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[c].name);
		printf("%d.	%d.	%d.	", person[c].birth.year, person[c].birth.month, person[c].birth.day);
		printf("%s	", person[c].sex);
		printf("%s		", person[c].address);
		printf("%s	\n", person[c].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[d].name);
		printf("%d.	%d.	%d.	", person[d].birth.year, person[d].birth.month, person[d].birth.day);
		printf("%s	", person[d].sex);
		printf("%s		", person[d].address);
		printf("%s	\n", person[d].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[e].name);
		printf("%d.	%d.	%d.	", person[e].birth.year, person[e].birth.month, person[e].birth.day);
		printf("%s	", person[e].sex);
		printf("%s		", person[e].address);
		printf("%s	\n", person[e].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[f].name);
		printf("%d.	%d.	%d.	", person[f].birth.year, person[f].birth.month, person[f].birth.day);
		printf("%s	", person[f].sex);
		printf("%s		", person[f].address);
		printf("%s	\n", person[f].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[g].name);
		printf("%d.	%d.	%d.	", person[g].birth.year, person[g].birth.month, person[g].birth.day);
		printf("%s	", person[g].sex);
		printf("%s		", person[g].address);
		printf("%s	\n", person[g].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[h].name);
		printf("%d.	%d.	%d.	", person[h].birth.year, person[h].birth.month, person[h].birth.day);
		printf("%s	", person[h].sex);
		printf("%s		", person[h].address);
		printf("%s	\n", person[h].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[x].name);
		printf("%d.	%d.	%d.	", person[x].birth.year, person[x].birth.month, person[x].birth.day);
		printf("%s	", person[x].sex);
		printf("%s		", person[x].address);
		printf("%s	\n", person[x].phnum);
	}
	if (z < n) {
		z++;
		printf("%s	", person[y].name);
		printf("%d.	%d.	%d.	", person[y].birth.year, person[y].birth.month, person[y].birth.day);
		printf("%s	", person[y].sex);
		printf("%s		", person[y].address);
		printf("%s	\n", person[y].phnum);
	}                                                                                           //생년월일 올림차순 출력_끝  

	system("pause");
	return 0;
}
