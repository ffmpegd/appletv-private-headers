/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface UIMovieClosedCaptionData : NSObject {
@private
	NSString *_language;	// 4 = 0x4
	NSMutableArray *_data;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *language;	// G=0x34e6e9c1; S=0x34e6e9d1; @synthesize=_language
- (void)addCaptionText:(id)text startTime:(double)time endTime:(double)time3;	// 0x34e6e6dd
- (void)dealloc;	// 0x34e6e67d
- (id)description;	// 0x34e6e965
// declared property getter: - (id)language;	// 0x34e6e9c1
// declared property setter: - (void)setLanguage:(id)language;	// 0x34e6e9d1
- (id)timeMarkers;	// 0x34e6e955
@end

