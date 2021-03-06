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
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x31833b69; 
@property(copy) NSString *accessKey;	// G=0x318329a5; S=0x31832aa9; 
@property(copy) NSString *alt;	// G=0x318329d9; S=0x31832bcd; 
@property(copy) NSString *coords;	// G=0x31832a0d; S=0x31832cf1; 
@property(readonly, copy) NSString *hashName;	// G=0x318332fd; 
@property(readonly, copy) NSString *host;	// G=0x31833431; 
@property(readonly, copy) NSString *hostname;	// G=0x31833565; 
@property(copy) NSString *href;	// G=0x31833181; S=0x31832e15; 
@property(assign) BOOL noHref;	// G=0x318332bd; S=0x318332d9; 
@property(readonly, copy) NSString *pathname;	// G=0x31833699; 
@property(readonly, copy) NSString *port;	// G=0x318337cd; 
@property(readonly, copy) NSString *protocol;	// G=0x31833901; 
@property(readonly, copy) NSString *search;	// G=0x31833a35; 
@property(copy) NSString *shape;	// G=0x31832a41; S=0x31832f39; 
@property(copy) NSString *target;	// G=0x31832a75; S=0x3183305d; 
// declared property getter: - (id)absoluteLinkURL;	// 0x31833b69
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x3185d705
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x3185cf4d
// declared property getter: - (id)accessKey;	// 0x318329a5
// declared property getter: - (id)alt;	// 0x318329d9
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x3185d7b1
- (id)boundingBoxesWithOwner:(id)owner;	// 0x3185cecd
// declared property getter: - (id)coords;	// 0x31832a0d
// declared property getter: - (id)hashName;	// 0x318332fd
// declared property getter: - (id)host;	// 0x31833431
// declared property getter: - (id)hostname;	// 0x31833565
// declared property getter: - (id)href;	// 0x31833181
// declared property getter: - (BOOL)noHref;	// 0x318332bd
// declared property getter: - (id)pathname;	// 0x31833699
// declared property getter: - (id)port;	// 0x318337cd
// declared property getter: - (id)protocol;	// 0x31833901
// declared property getter: - (id)search;	// 0x31833a35
// declared property setter: - (void)setAccessKey:(id)key;	// 0x31832aa9
// declared property setter: - (void)setAlt:(id)alt;	// 0x31832bcd
// declared property setter: - (void)setCoords:(id)coords;	// 0x31832cf1
// declared property setter: - (void)setHref:(id)href;	// 0x31832e15
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x318332d9
// declared property setter: - (void)setShape:(id)shape;	// 0x31832f39
// declared property setter: - (void)setTarget:(id)target;	// 0x3183305d
// declared property getter: - (id)shape;	// 0x31832a41
// declared property getter: - (id)target;	// 0x31832a75
@end

