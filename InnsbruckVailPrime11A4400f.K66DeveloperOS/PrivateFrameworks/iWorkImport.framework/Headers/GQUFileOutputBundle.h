/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import </libobjc.A.h>
#import "GQUOutputBundle.h"


@interface GQUFileOutputBundle : NSObject <GQUOutputBundle> {
	CFURLRef mOutputUrl;	// 4 = 0x4
}
- (id)initWithOutputPath:(CFStringRef)outputPath;	// 0x33cea11d
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x33cea201
- (void)dealloc;	// 0x33cea1bd
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x33cea231
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x33cea209
- (void)setDocumentSize:(CGSize)size;	// 0x33cea35d
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x33cea361
@end
