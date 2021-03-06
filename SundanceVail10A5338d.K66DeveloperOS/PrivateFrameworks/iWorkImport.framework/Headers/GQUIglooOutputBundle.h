/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQUOutputBundle.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle> {
	CFDictionaryRef mAttachments;	// 4 = 0x4
	CFDataRef mMainHtmlData;	// 8 = 0x8
	CFStringRef mUriPrefix;	// 12 = 0xc
	CFStringRef mUuidStr;	// 16 = 0x10
}
- (id)init;	// 0x350b59a1
- (CFDictionaryRef)attachments;	// 0x350b5ba5
- (CFDictionaryRef)createOutputDictionary;	// 0x350b5bb5
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x350b5ad5
- (void)dealloc;	// 0x350b5a25
- (CFDataRef)mainHtmlData;	// 0x350b5b95
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x350b5b41
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x350b5b25
- (void)setDocumentSize:(CGSize)size;	// 0x350b5c29
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x350b5c2d
- (void)setUriPrefix:(CFStringRef)prefix;	// 0x350b5aad
@end

