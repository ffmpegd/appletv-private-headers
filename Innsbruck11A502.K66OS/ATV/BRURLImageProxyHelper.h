/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, BRURLImageProxy;

__attribute__((visibility("hidden")))
@interface BRURLImageProxyHelper : XXUnknownSuperclass {
	id _completionBlock;	// 4 = 0x4
	NSString *_imageID;	// 8 = 0x8
	BRURLImageProxy *_imageProxy;	// 12 = 0xc
}
- (id)initWithURL:(id)url withCompletionBlock:(id)completionBlock;	// 0x4e6b71
- (id)initWithURLString:(id)urlstring withCompletionBlock:(id)completionBlock;	// 0x4e6d21
- (void).cxx_destruct;	// 0x4e719d
- (void)_imageLoadFinished:(id)finished wasCancelled:(BOOL)cancelled;	// 0x4e6d99
- (void)_imageNotAvailable:(id)available;	// 0x4e7135
- (void)_imageUpdated:(id)updated;	// 0x4e7071
- (void)cancel;	// 0x4e7031
- (void)dealloc;	// 0x4e6cb5
- (void)load;	// 0x4e6ead
@end

