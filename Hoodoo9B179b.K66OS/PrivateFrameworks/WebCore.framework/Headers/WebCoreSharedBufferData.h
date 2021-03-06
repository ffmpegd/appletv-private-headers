/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSData.h> // Unknown library
#import "WebCore-Structs.h"


__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferData : NSData {
@private
	RefPtr<WebCore::SharedBuffer> sharedBuffer;	// 4 = 0x4
}
+ (void)initialize;	// 0x33528199
- (id)initWithSharedBuffer:(SharedBuffer *)sharedBuffer;	// 0x335281b1
- (id).cxx_construct;	// 0x3352819d
- (void).cxx_destruct;	// 0x335286c1
- (const void *)bytes;	// 0x335282ad
- (void)dealloc;	// 0x3352866d
- (void)finalize;	// 0x33aa8ac9
- (unsigned)length;	// 0x3352821d
@end

