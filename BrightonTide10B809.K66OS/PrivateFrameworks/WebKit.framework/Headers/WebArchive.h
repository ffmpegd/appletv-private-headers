/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WebArchivePrivate;

@interface WebArchive : NSObject <NSCoding, NSCopying> {
	WebArchivePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x365b01cd
- (id)initWithCoder:(id)coder;	// 0x365b0a6d
- (id)initWithData:(id)data;	// 0x365b080d
- (id)initWithMainResource:(id)mainResource subresources:(id)subresources subframeArchives:(id)archives;	// 0x365b0235
- (LegacyWebArchive *)_coreLegacyWebArchive;	// 0x365b1661
- (id)_initWithCoreLegacyWebArchive:(PassRefPtr<WebCore::LegacyWebArchive>)coreLegacyWebArchive;	// 0x365b14e1
- (id)copyWithZone:(NSZone *)zone;	// 0x365b0d2d
- (id)data;	// 0x365b13d1
- (void)dealloc;	// 0x365b0ce1
- (void)encodeWithCoder:(id)coder;	// 0x365b0c55
- (id)mainResource;	// 0x365b0d3d
- (id)subframeArchives;	// 0x365b1175
- (id)subresources;	// 0x365b0ee1
@end
