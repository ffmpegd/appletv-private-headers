/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface MPMovieThumbnailRequest : NSObject {
@private
	NSArray *_times;	// 4 = 0x4
	int _timeOption;	// 8 = 0x8
}
@property(assign, nonatomic) int timeOption;	// G=0x33720475; S=0x33720485; @synthesize=_timeOption
@property(retain, nonatomic) NSArray *times;	// G=0x33720495; S=0x337268b1; @synthesize=_times
- (void)dealloc;	// 0x337252fd
// declared property setter: - (void)setTimeOption:(int)option;	// 0x33720485
// declared property setter: - (void)setTimes:(id)times;	// 0x337268b1
// declared property getter: - (int)timeOption;	// 0x33720475
// declared property getter: - (id)times;	// 0x33720495
@end
