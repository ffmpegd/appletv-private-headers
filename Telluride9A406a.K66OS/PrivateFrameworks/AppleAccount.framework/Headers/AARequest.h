/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURLRequest;

@interface AARequest : NSObject {
	NSString *_urlString;	// 4 = 0x4
	BOOL _flushCache;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL flushCache;	// G=0x35f6bafd; S=0x35f6bb0d; @synthesize=_flushCache
@property(readonly, assign) NSURLRequest *urlRequest;	// G=0x35f6b6d9; 
@property(readonly, retain) NSString *urlString;	// G=0x35f6b6d5; converted property
+ (id)protocolVersion;	// 0x35f6b675
+ (Class)responseClass;	// 0x35f6b659
- (id)initWithURLString:(id)urlstring;	// 0x35f6b681
- (id)bodyDictionary;	// 0x35f6b821
- (void)dealloc;	// 0x35f6bab1
// declared property getter: - (BOOL)flushCache;	// 0x35f6bafd
- (void)performRequestWithHandler:(id)handler;	// 0x35f6b94d
// declared property setter: - (void)setFlushCache:(BOOL)cache;	// 0x35f6bb0d
- (id)urlCredential;	// 0x35f6b81d
// declared property getter: - (id)urlRequest;	// 0x35f6b6d9
// converted property getter: - (id)urlString;	// 0x35f6b6d5
@end

