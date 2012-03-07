/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFPageRenderOperation, UIImage, UIPDFPage;

@interface UIPDFPageRenderJob : NSObject {
	UIPDFPage *_page;	// 4 = 0x4
	unsigned pageIndex;	// 8 = 0x8
	CGSize _size;	// 12 = 0xc
	UIImage *_image;	// 20 = 0x14
	UIPDFPageRenderOperation *_operation;	// 24 = 0x18
	id _target;	// 28 = 0x1c
	SEL _callback;	// 32 = 0x20
	id _userData;	// 36 = 0x24
	BOOL _sendPending;	// 40 = 0x28
	int _lock;	// 44 = 0x2c
	unsigned _pageIndex;	// 48 = 0x30
}
@property(readonly, retain) UIImage *image;	// G=0x3128b48d; @dynamic
@property(assign) UIPDFPageRenderOperation *operation;	// G=0x3128b4c1; S=0x3128b4f5; @dynamic
@property(readonly, assign) unsigned pageIndex;	// G=0x3128ac3d; @synthesize=_pageIndex
- (id)initWithPage:(id)page maxSize:(CGSize)size queuePriority:(int)priority;	// 0x3128ac4d
- (void)cancel;	// 0x3128bab9
- (void)cancelOperation;	// 0x3128b8e5
- (void)cancelOperationForTarget:(id)target;	// 0x3128b6e1
- (void)dealloc;	// 0x3128bcbd
// declared property getter: - (id)image;	// 0x3128b48d
// declared property getter: - (id)operation;	// 0x3128b4c1
// declared property getter: - (unsigned)pageIndex;	// 0x3128ac3d
- (void)renderImage;	// 0x3128b101
- (void)sendImage;	// 0x3128af81
- (void)sendImageTo:(id)to callback:(SEL)callback userData:(id)data;	// 0x3128ad61
// declared property setter: - (void)setOperation:(id)operation;	// 0x3128b4f5
- (void)setTarget:(id)target callback:(SEL)callback userData:(id)data;	// 0x3128b529
@end

