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
- (id)_currentEffectContainer;	// 0x3332c2e9
- (id)_effectContainerForTime:(double)time;	// 0x3332c541
- (id)_firstEffectContainer;	// 0x3332c491
- (int)_mainLayerIndex;	// 0x3332c689
- (id)currentSlide;	// 0x3332c9f9
- (id)currentSlides;	// 0x3332c815
- (id)displayedEffectContainers;	// 0x3332b991
- (void)gotoNextSlide;	// 0x3332cba1
- (void)gotoPreviousSlide;	// 0x3332d029
- (void)gotoSlide:(id)slide;	// 0x3332d3d9
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x3332b9f9
- (void)moveToNextEffectContainer;	// 0x3332bc21
- (void)moveToPreviousEffectContainer;	// 0x3332bd01
- (void)moveToSubtitleForSlide:(id)slide;	// 0x3332c035
- (void)moveToTitleSlide;	// 0x3332bdcd
- (double)relativeTime;	// 0x3332b839
- (double)relativeTimeForBackgroundAudio;	// 0x3332b889
- (double)relativeTimeForLayer:(id)layer;	// 0x3332b8e9
- (void)watcherThread:(id)thread;	// 0x3332c731
@end

@interface NSObject (WithResultSelector)
- (double)performWithDoubleResultSelector:(SEL)doubleResultSelector onThread:(id)thread withObject:(id)object;	// 0x333d4e81
@end

