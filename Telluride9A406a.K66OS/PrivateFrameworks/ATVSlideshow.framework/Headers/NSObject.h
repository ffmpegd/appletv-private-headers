/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface NSObject (MRMarimbaViewPlayback)
- (id)_currentEffectContainer;	// 0x34998c9d
- (id)_effectContainerForTime:(double)time;	// 0x34998ec9
- (id)_firstEffectContainer;	// 0x34998e1d
- (int)_mainLayerIndex;	// 0x34998ff1
- (id)currentSlide;	// 0x34999329
- (id)currentSlides;	// 0x34999179
- (id)displayedEffectContainers;	// 0x34998305
- (void)gotoNextSlide;	// 0x349994b9
- (void)gotoPreviousSlide;	// 0x34999965
- (void)gotoSlide:(id)slide;	// 0x34999cdd
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x34998369
- (void)moveToNextEffectContainer;	// 0x3499856d
- (void)moveToPreviousEffectContainer;	// 0x34998649
- (void)moveToSubtitleForSlide:(id)slide;	// 0x349989b9
- (void)moveToTitleSlide;	// 0x34998721
- (double)relativeTime;	// 0x349981ad
- (double)relativeTimeForBackgroundAudio;	// 0x349981fd
- (double)relativeTimeForLayer:(id)layer;	// 0x3499825d
- (void)watcherThread:(id)thread;	// 0x34999099
@end

@interface NSObject (WithResultSelector)
- (double)performWithDoubleResultSelector:(SEL)doubleResultSelector onThread:(id)thread withObject:(id)object;	// 0x34a23ed1
@end
