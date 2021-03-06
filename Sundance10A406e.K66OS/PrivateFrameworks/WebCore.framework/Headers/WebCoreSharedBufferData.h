/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSData.h> // Unknown library


@interface WebCoreSharedBufferData : NSData {
	RefPtr<WebCore::SharedBuffer> sharedBuffer;	// 4 = 0x4
}
+ (void)initialize;	// 0x31b63f81
- (id)initWithSharedBuffer:(SharedBuffer *)sharedBuffer;	// 0x31b63f99
- (id).cxx_construct;	// 0x31b63f85
- (void).cxx_destruct;	// 0x31b64ddd
- (const void *)bytes;	// 0x31b64131
- (void)dealloc;	// 0x31b64d89
- (void)finalize;	// 0x32213b65
- (unsigned)length;	// 0x31b640a9
@end

