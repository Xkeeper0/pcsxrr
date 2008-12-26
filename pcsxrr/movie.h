#ifndef __MOVIE_H__
#define __MOVIE_H__

extern int flagDontPause;
extern int flagFakePause;
extern int flagGPUchain;
extern int flagVSync;
extern int HasEmulatedFrame;
extern struct MovieType Movie;

void MOV_StartMovie(int mode);
void MOV_StopMovie();
void MOV_ReadJoy(PadDataS *pad,unsigned char type);
void MOV_WriteJoy(PadDataS *pad,unsigned char type);
int MOV_ReadMovieFile(char* filename, struct MovieType *tempMovie);
void MOV_WriteMovieFile();

int MovieFreeze(gzFile f, int Mode);

#endif /* __MOVIE_H__ */
