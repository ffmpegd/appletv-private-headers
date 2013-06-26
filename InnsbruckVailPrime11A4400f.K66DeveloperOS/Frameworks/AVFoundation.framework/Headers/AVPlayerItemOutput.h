/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {
	AVPlayerItemOutputInternal *_outputInternal;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL suppressesPlayerRendering;	// G=0x2c310e49; S=0x2c310e45; 
- (id)init;	// 0x2c310a11
- (void)_attachToPlayerItem:(id)playerItem;	// 0x2c310e6d
- (OpaqueCMTimebase *)_copyTimebase;	// 0x2c310eb1
- (void)_detachFromPlayerItem;	// 0x2c310ead
- (XXStruct_pwHToB)_itemTimeForHostTimeAsCMTime:(XXStruct_pwHToB)hostTimeAsCMTime;	// 0x2c310cbd
- (void)_setTimebase:(OpaqueCMTimebase *)timebase;	// 0x2c311041
- (id)_weakReference;	// 0x2c310e4d
- (void)dealloc;	// 0x2c310b95
- (void)finalize;	// 0x2c310c45
- (XXStruct_pwHToB)itemTimeForHostTime:(double)hostTime;	// 0x2c310d85
- (XXStruct_pwHToB)itemTimeForMachAbsoluteTime:(long long)machAbsoluteTime;	// 0x2c310de9
// declared property setter: - (void)setSuppressesPlayerRendering:(BOOL)rendering;	// 0x2c310e45
// declared property getter: - (BOOL)suppressesPlayerRendering;	// 0x2c310e49
@end
