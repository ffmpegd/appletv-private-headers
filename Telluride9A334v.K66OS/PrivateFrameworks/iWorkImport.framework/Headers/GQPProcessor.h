/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQZArchive, GQSDocument;

__attribute__((visibility("hidden")))
@interface GQPProcessor : NSObject {
@private
	xmlTextReader *mReader;	// 4 = 0x4
	xmlParserInputBuffer *mParserInputBuffer;	// 8 = 0x8
	GQZArchive *mArchive;	// 12 = 0xc
	stack<std::tr1::shared_ptr<StateSpec>,std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec> > > > *mStateStack;	// 16 = 0x10
	stack<std::pair<const Action*, int>,std::deque<std::pair<const Action*, int>, std::allocator<std::pair<const Action*, int> > > > *mActionStack;	// 20 = 0x14
	GQSDocument *mDocumentState;	// 24 = 0x18
	QLPreviewRequestRef mOutputPreviewRequest;	// 28 = 0x1c
	CFBundleRef mBundle;	// 32 = 0x20
	CGSize mThumbnailSize;	// 36 = 0x24
	BOOL mWrongFormat;	// 44 = 0x2c
	unsigned char mIsProgressive;	// 45 = 0x2d
}
@property(assign) CFBundleRef bundle;	// G=0x32c06ca9; S=0x32c06569; converted property
@property(assign) CGSize thumbnailSize;	// G=0x32c065a9; S=0x32c065c1; converted property
@property(assign, getter=isWrongFormat) BOOL wrongFormat;	// G=0x32c065e5; S=0x32c065f5; converted property
+ (void)initialize;	// 0x32c06b75
- (id)initWithPath:(id)path indexFileName:(id)name previewRequest:(QLPreviewRequestRef)request;	// 0x32c06659
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name previewRequest:(QLPreviewRequestRef)request;	// 0x32c06d99
- (stack<std::pair<const Action*, int>,std::deque<std::pair<const Action*, int>, std::allocator<std::pair<const Action*, int> > > > *)actionStack;	// 0x32c06589
- (id)archive;	// 0x32c06559
// converted property getter: - (CFBundleRef)bundle;	// 0x32c06ca9
- (void)dealloc;	// 0x32c06cd1
- (id)documentState;	// 0x32c06599
- (BOOL)go;	// 0x32c06ba5
// converted property getter: - (BOOL)isWrongFormat;	// 0x32c065e5
- (void)pushInitialState;	// 0x32c06555
// converted property setter: - (void)setBundle:(CFBundleRef)bundle;	// 0x32c06569
- (void)setProgressiveMode:(unsigned char)mode;	// 0x32c065d5
// converted property setter: - (void)setThumbnailSize:(CGSize)size;	// 0x32c065c1
// converted property setter: - (void)setWrongFormat:(BOOL)format;	// 0x32c065f5
- (stack<std::tr1::shared_ptr<StateSpec>,std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec> > > > *)stateStack;	// 0x32c06579
// converted property getter: - (CGSize)thumbnailSize;	// 0x32c065a9
@end

