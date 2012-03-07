/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSObject.h"


@protocol BRTransportDataProvider <NSObject>
- (BRTimeRange)bufferedRange;
- (float)bufferingProgress;
- (id)chapterAtIndex:(long)index;
- (id)chapterGroupAtIndex:(long)index;
- (long)chapterGroupCount;
- (long)chapterGroupIndex;
- (id)chapters;
- (long)currentChapterIndex;
- (long)currentInterstitialIndex;
- (double)duration;
- (double)elapsedTime;
- (id)interstitialTimes;
- (id)playbackDate;
- (int)playerState;
- (BOOL)supportsBufferedRange;
- (double)virtualChapterMark;
@end

