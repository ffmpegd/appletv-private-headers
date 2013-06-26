/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMStyleSheet, NSURL;

@interface DOMHTMLLinkElement : DOMHTMLElement {
}
@property(readonly, assign) NSURL *absoluteLinkURL;	// G=0x35ff4b8d; 
@property(copy) NSString *charset;	// G=0x35ff3325; S=0x35ff3449; 
@property(assign) BOOL disabled;	// G=0x35ff3105; S=0x35ff3211; 
@property(copy) NSString *href;	// G=0x35ff35fd; S=0x35ff37c5; 
@property(copy) NSString *hreflang;	// G=0x35ff3979; S=0x35ff3a9d; 
@property(copy) NSString *media;	// G=0x35ff3c51; S=0x35ff3d75; 
@property(copy) NSString *rel;	// G=0x35ff3f29; S=0x35ff404d; 
@property(copy) NSString *rev;	// G=0x35ff4201; S=0x35ff4325; 
@property(readonly, assign) DOMStyleSheet *sheet;	// G=0x35ff4a89; 
@property(copy) NSString *target;	// G=0x35ff44d9; S=0x35ff45fd; 
@property(copy) NSString *type;	// G=0x35ff47b1; S=0x35ff48d5; 
- (BOOL)_mediaQueryMatches;	// 0x35fa8f79
- (BOOL)_mediaQueryMatchesForOrientation:(int)orientation;	// 0x35fa8ed5
// declared property getter: - (id)absoluteLinkURL;	// 0x35ff4b8d
// declared property getter: - (id)charset;	// 0x35ff3325
// declared property getter: - (BOOL)disabled;	// 0x35ff3105
// declared property getter: - (id)href;	// 0x35ff35fd
// declared property getter: - (id)hreflang;	// 0x35ff3979
// declared property getter: - (id)media;	// 0x35ff3c51
// declared property getter: - (id)rel;	// 0x35ff3f29
// declared property getter: - (id)rev;	// 0x35ff4201
// declared property setter: - (void)setCharset:(id)charset;	// 0x35ff3449
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x35ff3211
// declared property setter: - (void)setHref:(id)href;	// 0x35ff37c5
// declared property setter: - (void)setHreflang:(id)hreflang;	// 0x35ff3a9d
// declared property setter: - (void)setMedia:(id)media;	// 0x35ff3d75
// declared property setter: - (void)setRel:(id)rel;	// 0x35ff404d
// declared property setter: - (void)setRev:(id)rev;	// 0x35ff4325
// declared property setter: - (void)setTarget:(id)target;	// 0x35ff45fd
// declared property setter: - (void)setType:(id)type;	// 0x35ff48d5
// declared property getter: - (id)sheet;	// 0x35ff4a89
// declared property getter: - (id)target;	// 0x35ff44d9
// declared property getter: - (id)type;	// 0x35ff47b1
@end
