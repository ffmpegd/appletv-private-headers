/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library

@class NSURLConnection, NSData, NSError;

__attribute__((visibility("hidden")))
@interface QLThreadInvoker : NSObject {
	NSURLConnection *_connection;	// 4 = 0x4
	NSData *_data;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
}
- (id)initWithConnection:(id)connection data:(id)data error:(id)error;	// 0x33b1753d
- (void)connectionDidFailWithError:(id)connection;	// 0x33b176e9
- (void)connectionDidReceiveData:(id)connection;	// 0x33b1765d
- (void)connectionDidReceiveDataLengthReceived:(id)connection;	// 0x33b17691
- (void)dealloc;	// 0x33b175cd
@end
