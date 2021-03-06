/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface OpenURLTarget : NSObject {
	unsigned _applicationState;	// 4 = 0x4
	struct {
		NSString *clientIdentifier;
		NSString *normalScheme;
		NSString *secureScheme;
	} _targetData;	// 8 = 0x8
	int _targetIndex;	// 20 = 0x14
}
- (id)init;	// 0x3353e53d
- (id)initWithTargetIdentifier:(id)targetIdentifier;	// 0x3353e551
- (int)compare:(id)compare;	// 0x3353e63d
- (id)copyURLForURL:(id)url;	// 0x3353e6a9
- (id)description;	// 0x3353e7c5
@end

