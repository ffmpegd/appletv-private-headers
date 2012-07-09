/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedMediaBadgesElement : ATVFeedElement {
	NSString *_audioFormat;	// 4 = 0x4
	NSString *_videoFormat;	// 8 = 0x8
	BOOL _closedCaption;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *audioFormat;	// G=0x13d219; S=0x13d22d; @synthesize=_audioFormat
@property(assign, nonatomic) BOOL closedCaption;	// G=0x13d261; S=0x13d271; @synthesize=_closedCaption
@property(copy, nonatomic) NSString *videoFormat;	// G=0x13d23d; S=0x13d251; @synthesize=_videoFormat
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13d0c9
// declared property getter: - (id)audioFormat;	// 0x13d219
// declared property getter: - (BOOL)closedCaption;	// 0x13d261
- (void)dealloc;	// 0x13d1b5
// declared property setter: - (void)setAudioFormat:(id)format;	// 0x13d22d
// declared property setter: - (void)setClosedCaption:(BOOL)caption;	// 0x13d271
// declared property setter: - (void)setVideoFormat:(id)format;	// 0x13d251
// declared property getter: - (id)videoFormat;	// 0x13d23d
@end
