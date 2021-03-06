/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import </libobjc.A.h>
#import "CorePDF-Structs.h"

@class NSString, UIPDFPageImageCache;
@protocol UIPDFDocumentDelegate, NSObject;

@interface UIPDFDocument : NSObject {
	CGPDFDocumentRef _cgDocument;	// 4 = 0x4
	unsigned _numberOfPages;	// 8 = 0x8
	float _cachedWidth;	// 12 = 0xc
	NSString *_documentID;	// 16 = 0x10
	NSString *_documentName;	// 20 = 0x14
	UIPDFPageImageCache *_pageImageCache;	// 24 = 0x18
	unsigned _imageCacheCount;	// 28 = 0x1c
	unsigned _imageCacheLookAhead;	// 32 = 0x20
	int _lock;	// 36 = 0x24
	int _imageCacheLock;	// 40 = 0x28
	UIPDFPageImageCache *_thumbnailCache;	// 44 = 0x2c
	int _thumbnailLock;	// 48 = 0x30
	id<NSObject, UIPDFDocumentDelegate> _delegate;	// 52 = 0x34
}
@property(readonly, assign) CGPDFDocumentRef CGDocument;	// G=0x3061cf85; @synthesize=_cgDocument
@property(assign, nonatomic) id<NSObject, UIPDFDocumentDelegate> delegate;	// G=0x3061cf65; S=0x3061cf75; @synthesize=_delegate
@property(readonly, assign) NSString *documentID;	// G=0x3061cc39; @dynamic
@property(readonly, assign) unsigned numberOfPages;	// G=0x3061cad9; @dynamic
@property(retain) UIPDFPageImageCache *pageImageCache;	// G=0x3061d205; S=0x3061d29d; @dynamic
@property(retain) UIPDFPageImageCache *thumbnailCache;	// G=0x3061d309; S=0x3061d389; @dynamic
+ (id)documentNamed:(id)named;	// 0x3061c749
- (id)initWithCGPDFDocument:(CGPDFDocumentRef)cgpdfdocument;	// 0x3061c825
- (id)initWithURL:(id)url;	// 0x3061c8cd
// declared property getter: - (CGPDFDocumentRef)CGDocument;	// 0x3061cf85
- (BOOL)allowsCopying;	// 0x3061cd81
- (CGPDFDocumentRef)copyCGPDFDocument;	// 0x3061c7ed
- (BOOL)copyDocumentTo:(id)to;	// 0x3061cda1
- (id)copyPageAtIndex:(unsigned)index;	// 0x3061cba9
- (void)dealloc;	// 0x3061c9b1
// declared property getter: - (id)delegate;	// 0x3061cf65
// declared property getter: - (id)documentID;	// 0x3061cc39
- (float)maxHeight;	// 0x3061d061
- (float)maxWidth;	// 0x3061cf99
// declared property getter: - (unsigned)numberOfPages;	// 0x3061cad9
- (id)pageAtIndex:(unsigned)index;	// 0x3061cb0d
// declared property getter: - (id)pageImageCache;	// 0x3061d205
- (void)purgePagesBefore:(unsigned)before;	// 0x3061cc35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3061cf75
- (void)setImageCacheCount:(unsigned)count lookAhead:(unsigned)ahead;	// 0x3061ca89
// declared property setter: - (void)setPageImageCache:(id)cache;	// 0x3061d29d
// declared property setter: - (void)setThumbnailCache:(id)cache;	// 0x3061d389
- (float)sumHeight;	// 0x3061d179
- (float)sumWidth;	// 0x3061d0ed
// declared property getter: - (id)thumbnailCache;	// 0x3061d309
@end

