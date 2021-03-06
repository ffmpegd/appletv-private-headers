/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface VideoData : XXUnknownSuperclass {
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int videoType;	// 12 = 0xc
	int width;	// 16 = 0x10
	int height;	// 20 = 0x14
	int parX;	// 24 = 0x18
	int parY;	// 28 = 0x1c
	long long averageFrameTime;	// 32 = 0x20
	int averageBitRate;	// 40 = 0x28
}
- (id)initWithBuffer:(id)buffer;	// 0x4b4749
- (int)getAverageBitRate;	// 0x4b496d
- (long long)getAverageFrameTime;	// 0x4b4955
- (int)getFlags;	// 0x4b48e5
- (int)getHeight;	// 0x4b4925
- (int)getPID;	// 0x4b48f5
- (int)getParX;	// 0x4b4935
- (int)getParY;	// 0x4b4945
- (int)getVideoType;	// 0x4b4905
- (int)getWidth;	// 0x4b4915
@end

