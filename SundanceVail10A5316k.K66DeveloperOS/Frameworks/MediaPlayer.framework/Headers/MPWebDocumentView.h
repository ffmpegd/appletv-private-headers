/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIWebDocumentView.h> // Unknown library

@class NSString;

@interface MPWebDocumentView : UIWebDocumentView {
	id _loadDelegate;	// 616 = 0x268
	NSString *_stylesheet;	// 620 = 0x26c
	unsigned _adjustHeightToFit : 1;	// 624 = 0x270
	unsigned _treatAsPlainText : 1;	// 624 = 0x270
}
@property(assign, nonatomic) id loadDelegate;	// G=0x348d4a31; S=0x348d4a41; @synthesize=_loadDelegate
@property(retain, nonatomic) NSString *stylesheet;	// G=0x348d4a51; S=0x348d4a61; @synthesize=_stylesheet
+ (id)newEmptyLabelView;	// 0x348d3fa1
- (id)initWithFrame:(CGRect)frame;	// 0x348d40f9
- (void)dealloc;	// 0x348d4191
- (CGSize)layoutWithAutoresizingSize:(CGSize)autoresizingSize contentBlock:(id)block;	// 0x348d4705
// declared property getter: - (id)loadDelegate;	// 0x348d4a31
- (void)openURL:(id)url;	// 0x348d4879
- (void)setContentWithString:(id)string stylesheet:(id)stylesheet;	// 0x348d45ed
- (void)setHTMLFragment:(id)fragment;	// 0x348d4219
// declared property setter: - (void)setLoadDelegate:(id)delegate;	// 0x348d4a41
- (void)setPlaintextString:(id)string manuallyWrap:(BOOL)wrap;	// 0x348d4311
// declared property setter: - (void)setStylesheet:(id)stylesheet;	// 0x348d4a61
// declared property getter: - (id)stylesheet;	// 0x348d4a51
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x348d49a5
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x348d4899
@end

