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
@property(assign, nonatomic) BOOL flushCache;	// G=0x3389bbb1; S=0x3389bbc1; @synthesize=_flushCache
@property(readonly, assign) NSURLRequest *urlRequest;	// G=0x3389b78d; 
@property(readonly, retain) NSString *urlString;	// G=0x3389b789; converted property
+ (id)protocolVersion;	// 0x3389b729
+ (Class)responseClass;	// 0x3389b70d
- (id)initWithURLString:(id)urlstring;	// 0x3389b735
- (id)bodyDictionary;	// 0x3389b8d5
- (void)dealloc;	// 0x3389bb65
// declared property getter: - (BOOL)flushCache;	// 0x3389bbb1
- (void)performRequestWithHandler:(id)handler;	// 0x3389ba01
// declared property setter: - (void)setFlushCache:(BOOL)cache;	// 0x3389bbc1
- (id)urlCredential;	// 0x3389b8d1
// declared property getter: - (id)urlRequest;	// 0x3389b78d
// converted property getter: - (id)urlString;	// 0x3389b789
@end

