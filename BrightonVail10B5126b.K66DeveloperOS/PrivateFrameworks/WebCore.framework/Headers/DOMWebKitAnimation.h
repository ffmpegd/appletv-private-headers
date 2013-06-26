/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

@interface DOMWebKitAnimation : DOMObject {
}
@property(readonly, assign) double delay;	// G=0x36029295; 
@property(readonly, assign) unsigned short direction;	// G=0x36029699; 
@property(readonly, assign) double duration;	// G=0x36028f89; 
@property(assign) double elapsedTime;	// G=0x3602908d; S=0x36029191; 
@property(readonly, assign) BOOL ended;	// G=0x36029599; 
@property(readonly, assign) unsigned short fillMode;	// G=0x36029799; 
@property(readonly, assign) int iterationCount;	// G=0x36029399; 
@property(readonly, assign) NSString *name;	// G=0x36028dcd; 
@property(readonly, assign) BOOL paused;	// G=0x36029499; 
- (void)dealloc;	// 0x36028d01
// declared property getter: - (double)delay;	// 0x36029295
// declared property getter: - (unsigned short)direction;	// 0x36029699
// declared property getter: - (double)duration;	// 0x36028f89
// declared property getter: - (double)elapsedTime;	// 0x3602908d
// declared property getter: - (BOOL)ended;	// 0x36029599
// declared property getter: - (unsigned short)fillMode;	// 0x36029799
- (void)finalize;	// 0x36028d79
// declared property getter: - (int)iterationCount;	// 0x36029399
// declared property getter: - (id)name;	// 0x36028dcd
- (void)pause;	// 0x36029995
// declared property getter: - (BOOL)paused;	// 0x36029499
- (void)play;	// 0x36029899
// declared property setter: - (void)setElapsedTime:(double)time;	// 0x36029191
@end
