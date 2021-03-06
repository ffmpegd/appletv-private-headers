/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (MRMarimbaViewPlayback)
- (id)_currentEffectContainer;	// 0x36070731
- (id)_effectContainerForTime:(double)time;	// 0x36070989
- (id)_firstEffectContainer;	// 0x360708d9
- (int)_mainLayerIndex;	// 0x36070ad1
- (id)currentSlide;	// 0x36070e41
- (id)currentSlides;	// 0x36070c5d
- (id)displayedEffectContainers;	// 0x3606fdd9
- (void)gotoNextSlide;	// 0x36070fe9
- (void)gotoPreviousSlide;	// 0x36071471
- (void)gotoSlide:(id)slide;	// 0x36071821
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x3606fe41
- (void)moveToNextEffectContainer;	// 0x36070069
- (void)moveToPreviousEffectContainer;	// 0x36070149
- (void)moveToSubtitleForSlide:(id)slide;	// 0x3607047d
- (void)moveToTitleSlide;	// 0x36070215
- (double)relativeTime;	// 0x3606fc81
- (double)relativeTimeForBackgroundAudio;	// 0x3606fcd1
- (double)relativeTimeForLayer:(id)layer;	// 0x3606fd31
- (void)watcherThread:(id)thread;	// 0x36070b79
@end

@interface NSObject (WithResultSelector)
- (double)performWithDoubleResultSelector:(SEL)doubleResultSelector onThread:(id)thread withObject:(id)object;	// 0x36118cd9
@end

