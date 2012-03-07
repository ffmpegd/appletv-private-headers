/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedMediaBadgesElement : ATVFeedElement {
@private
	NSString *_audioFormat;	// 28 = 0x1c
	NSString *_videoFormat;	// 32 = 0x20
	BOOL _closedCaption;	// 36 = 0x24
}
@property(copy, nonatomic) NSString *audioFormat;	// G=0x33baaf7d; S=0x33baaf8d; @synthesize=_audioFormat
@property(assign, nonatomic) BOOL closedCaption;	// G=0x33baafe5; S=0x33baaff5; @synthesize=_closedCaption
@property(copy, nonatomic) NSString *videoFormat;	// G=0x33baafb1; S=0x33baafc1; @synthesize=_videoFormat
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33baae2d
// declared property getter: - (id)audioFormat;	// 0x33baaf7d
// declared property getter: - (BOOL)closedCaption;	// 0x33baafe5
- (void)dealloc;	// 0x33baaf1d
// declared property setter: - (void)setAudioFormat:(id)format;	// 0x33baaf8d
// declared property setter: - (void)setClosedCaption:(BOOL)caption;	// 0x33baaff5
// declared property setter: - (void)setVideoFormat:(id)format;	// 0x33baafc1
// declared property getter: - (id)videoFormat;	// 0x33baafb1
@end

