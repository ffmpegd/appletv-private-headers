/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MUPoolObject : NSObject {
	MUPoolObject *mPoolPrev;	// 4 = 0x4
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x322209cd
+ (void)clearAllPools;	// 0x322207f5
+ (int)clearPool;	// 0x32220c81
+ (BOOL)clearVars;	// 0x32220db1
+ (XXStruct_raCX$B *)poolInfo;	// 0x32220dad
+ (id)pooledClasses;	// 0x322207ad
- (void)purge;	// 0x32220c7d
- (oneway void)release;	// 0x32220be1
@end

