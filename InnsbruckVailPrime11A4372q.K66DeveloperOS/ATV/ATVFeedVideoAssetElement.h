/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, ATVXMLElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoAssetElement : ATVFeedElement {
	NSString *_url;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_description;	// 12 = 0xc
	NSString *_rating;	// 16 = 0x10
	NSString *_secondScreenURL;	// 20 = 0x14
	NSString *_subtitleStylesURL;	// 24 = 0x18
	ATVFeedImageElement *_image;	// 28 = 0x1c
	float _bookmarkTimeSec;	// 32 = 0x20
	ATVXMLElement *_xml;	// 36 = 0x24
	float _upNextPresentationTimeSec;	// 40 = 0x28
}
@property(assign, nonatomic) float bookmarkTimeSec;	// G=0x131011; S=0x131021; @synthesize=_bookmarkTimeSec
@property(copy, nonatomic) NSString *description;	// G=0x130f49; S=0x130f5d; @synthesize=_description
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x130fd9; S=0x130fe9; @synthesize=_image
@property(copy, nonatomic) NSString *rating;	// G=0x130f6d; S=0x130f81; @synthesize=_rating
@property(copy, nonatomic) NSString *secondScreenURL;	// G=0x130f91; S=0x130fa5; @synthesize=_secondScreenURL
@property(copy, nonatomic) NSString *subtitleStylesURL;	// G=0x130fb5; S=0x130fc9; @synthesize=_subtitleStylesURL
@property(copy, nonatomic) NSString *title;	// G=0x130f25; S=0x130f39; @synthesize=_title
@property(assign, nonatomic) float upNextPresentationTimeSec;	// G=0x131041; S=0x131051; @synthesize=_upNextPresentationTimeSec
@property(copy, nonatomic) NSString *url;	// G=0x130f01; S=0x130f15; @synthesize=_url
@property(readonly, assign, nonatomic) ATVXMLElement *xml;	// G=0x131031; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x130b69
- (void).cxx_destruct;	// 0x131061
// declared property getter: - (float)bookmarkTimeSec;	// 0x131011
// declared property getter: - (id)description;	// 0x130f49
// declared property getter: - (id)image;	// 0x130fd9
// declared property getter: - (id)rating;	// 0x130f6d
// declared property getter: - (id)secondScreenURL;	// 0x130f91
// declared property setter: - (void)setBookmarkTimeSec:(float)sec;	// 0x131021
// declared property setter: - (void)setDescription:(id)description;	// 0x130f5d
// declared property setter: - (void)setImage:(id)image;	// 0x130fe9
// declared property setter: - (void)setRating:(id)rating;	// 0x130f81
// declared property setter: - (void)setSecondScreenURL:(id)url;	// 0x130fa5
// declared property setter: - (void)setSubtitleStylesURL:(id)url;	// 0x130fc9
// declared property setter: - (void)setTitle:(id)title;	// 0x130f39
// declared property setter: - (void)setUpNextPresentationTimeSec:(float)sec;	// 0x131051
// declared property setter: - (void)setUrl:(id)url;	// 0x130f15
// declared property getter: - (id)subtitleStylesURL;	// 0x130fb5
// declared property getter: - (id)title;	// 0x130f25
// declared property getter: - (float)upNextPresentationTimeSec;	// 0x131041
// declared property getter: - (id)url;	// 0x130f01
// declared property getter: - (id)xml;	// 0x131031
@end

