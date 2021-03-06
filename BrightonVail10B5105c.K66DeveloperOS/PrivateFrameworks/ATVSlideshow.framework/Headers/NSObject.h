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
- (id)_currentEffectContainer;	// 0x3243e2e9
- (id)_effectContainerForTime:(double)time;	// 0x3243e541
- (id)_firstEffectContainer;	// 0x3243e491
- (int)_mainLayerIndex;	// 0x3243e689
- (id)currentSlide;	// 0x3243e9f9
- (id)currentSlides;	// 0x3243e815
- (id)displayedEffectContainers;	// 0x3243d991
- (void)gotoNextSlide;	// 0x3243eba1
- (void)gotoPreviousSlide;	// 0x3243f029
- (void)gotoSlide:(id)slide;	// 0x3243f3d9
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x3243d9f9
- (void)moveToNextEffectContainer;	// 0x3243dc21
- (void)moveToPreviousEffectContainer;	// 0x3243dd01
- (void)moveToSubtitleForSlide:(id)slide;	// 0x3243e035
- (void)moveToTitleSlide;	// 0x3243ddcd
- (double)relativeTime;	// 0x3243d839
- (double)relativeTimeForBackgroundAudio;	// 0x3243d889
- (double)relativeTimeForLayer:(id)layer;	// 0x3243d8e9
- (void)watcherThread:(id)thread;	// 0x3243e731
@end

@interface NSObject (WithResultSelector)
- (double)performWithDoubleResultSelector:(SEL)doubleResultSelector onThread:(id)thread withObject:(id)object;	// 0x324e6e81
@end

