/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class NSURL, NSString;

@interface DOMHTMLAreaElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x36a3aea1; 
@property(copy) NSString *accessKey;	// G=0x36a39479; S=0x36a399b9; 
@property(copy) NSString *alt;	// G=0x36a39559; S=0x36a39afd; 
@property(copy) NSString *coords;	// G=0x36a39639; S=0x36a39c41; 
@property(readonly, copy) NSString *hashName;	// G=0x36a3a58d; 
@property(readonly, copy) NSString *host;	// G=0x36a3a6d9; 
@property(readonly, copy) NSString *hostname;	// G=0x36a3a825; 
@property(copy) NSString *href;	// G=0x36a3a295; S=0x36a39d85; 
@property(assign) BOOL noHref;	// G=0x36a3a3ed; S=0x36a3a4b5; 
@property(readonly, copy) NSString *pathname;	// G=0x36a3a971; 
@property(retain) id ping;	// G=0x36a39719; S=0x36a39ec9; converted property
@property(readonly, copy) NSString *port;	// G=0x36a3aabd; 
@property(readonly, copy) NSString *protocol;	// G=0x36a3ac09; 
@property(readonly, copy) NSString *search;	// G=0x36a3ad55; 
@property(copy) NSString *shape;	// G=0x36a397f9; S=0x36a3a00d; 
@property(copy) NSString *target;	// G=0x36a398d9; S=0x36a3a151; 
// declared property getter: - (id)absoluteLinkURL;	// 0x36a3aea1
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x36a7dea1
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x36a7d2d9
// declared property getter: - (id)accessKey;	// 0x36a39479
// declared property getter: - (id)alt;	// 0x36a39559
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x36a7df49
- (id)boundingBoxesWithOwner:(id)owner;	// 0x36a7d251
// declared property getter: - (id)coords;	// 0x36a39639
// declared property getter: - (id)hashName;	// 0x36a3a58d
// declared property getter: - (id)host;	// 0x36a3a6d9
// declared property getter: - (id)hostname;	// 0x36a3a825
// declared property getter: - (id)href;	// 0x36a3a295
// declared property getter: - (BOOL)noHref;	// 0x36a3a3ed
// declared property getter: - (id)pathname;	// 0x36a3a971
// converted property getter: - (id)ping;	// 0x36a39719
// declared property getter: - (id)port;	// 0x36a3aabd
// declared property getter: - (id)protocol;	// 0x36a3ac09
// declared property getter: - (id)search;	// 0x36a3ad55
// declared property setter: - (void)setAccessKey:(id)key;	// 0x36a399b9
// declared property setter: - (void)setAlt:(id)alt;	// 0x36a39afd
// declared property setter: - (void)setCoords:(id)coords;	// 0x36a39c41
// declared property setter: - (void)setHref:(id)href;	// 0x36a39d85
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x36a3a4b5
// converted property setter: - (void)setPing:(id)ping;	// 0x36a39ec9
// declared property setter: - (void)setShape:(id)shape;	// 0x36a3a00d
// declared property setter: - (void)setTarget:(id)target;	// 0x36a3a151
// declared property getter: - (id)shape;	// 0x36a397f9
// declared property getter: - (id)target;	// 0x36a398d9
@end

