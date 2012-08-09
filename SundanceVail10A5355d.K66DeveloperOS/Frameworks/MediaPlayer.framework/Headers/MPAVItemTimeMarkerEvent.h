/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPTimeMarker, MPAVItem;

@interface MPAVItemTimeMarkerEvent : NSObject {
	MPAVItem *_AVItem;	// 4 = 0x4
	MPTimeMarker *_chapterMarker;	// 8 = 0x8
	MPTimeMarker *_artworkMarker;	// 12 = 0xc
	MPTimeMarker *_URLMarker;	// 16 = 0x10
	MPTimeMarker *_closedCaptionMarker;	// 20 = 0x14
}
@property(retain, nonatomic) MPAVItem *AVItem;	// G=0x336ccc39; S=0x336ccc49; @synthesize=_AVItem
@property(retain, nonatomic) MPTimeMarker *URLMarker;	// G=0x336ccc99; S=0x336ccca9; @synthesize=_URLMarker
@property(retain, nonatomic) MPTimeMarker *artworkMarker;	// G=0x336ccc79; S=0x336ccc89; @synthesize=_artworkMarker
@property(retain, nonatomic) MPTimeMarker *chapterMarker;	// G=0x336ccc59; S=0x336ccc69; @synthesize=_chapterMarker
@property(retain, nonatomic) MPTimeMarker *closedCaptionMarker;	// G=0x336cccb9; S=0x336cccc9; @synthesize=_closedCaptionMarker
- (id)initWithTimeMarkerNotificationUserInfo:(id)timeMarkerNotificationUserInfo;	// 0x336cc9e5
// declared property getter: - (id)AVItem;	// 0x336ccc39
// declared property getter: - (id)URLMarker;	// 0x336ccc99
// declared property getter: - (id)artworkMarker;	// 0x336ccc79
// declared property getter: - (id)chapterMarker;	// 0x336ccc59
// declared property getter: - (id)closedCaptionMarker;	// 0x336cccb9
- (id)crossedMarkerOfType:(int)type;	// 0x336ccbe5
- (void)dealloc;	// 0x336ccb45
// declared property setter: - (void)setAVItem:(id)item;	// 0x336ccc49
// declared property setter: - (void)setArtworkMarker:(id)marker;	// 0x336ccc89
// declared property setter: - (void)setChapterMarker:(id)marker;	// 0x336ccc69
// declared property setter: - (void)setClosedCaptionMarker:(id)marker;	// 0x336cccc9
// declared property setter: - (void)setURLMarker:(id)marker;	// 0x336ccca9
@end
