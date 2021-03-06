/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CADisplay;

@interface CADisplayLink : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CADisplay *display;	// G=0x33f28e99; 
@property(readonly, assign, nonatomic) double duration;	// G=0x33f29289; 
@property(assign, nonatomic) int frameInterval;	// G=0x33f28e85; S=0x33f28e6d; 
@property(assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x33f28e55; S=0x33f28e39; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x33eab591; 
@property(retain, nonatomic) id userInfo;	// G=0x33f28ead; S=0x33f29819; 
+ (id)displayLinkWithDisplay:(id)display target:(id)target selector:(SEL)selector;	// 0x33eaad75
+ (id)displayLinkWithTarget:(id)target selector:(SEL)selector;	// 0x33eaad11
- (id)_initWithDisplayLink:(DisplayLink *)displayLink;	// 0x33eab0f9
- (void)addToRunLoop:(id)runLoop forMode:(id)mode;	// 0x33eab14d
- (void)dealloc;	// 0x33eab779
// declared property getter: - (id)display;	// 0x33f28e99
// declared property getter: - (double)duration;	// 0x33f29289
// declared property getter: - (int)frameInterval;	// 0x33f28e85
- (void)invalidate;	// 0x33eab5a9
// declared property getter: - (BOOL)isPaused;	// 0x33f28e55
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x33f292a1
// declared property setter: - (void)setFrameInterval:(int)interval;	// 0x33f28e6d
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x33f28e39
// declared property setter: - (void)setUserInfo:(id)info;	// 0x33f29819
// declared property getter: - (double)timestamp;	// 0x33eab591
// declared property getter: - (id)userInfo;	// 0x33f28ead
@end

