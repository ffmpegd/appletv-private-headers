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
- (id)init;	// 0x36a73a81
- (id)initWithTargetIdentifier:(id)targetIdentifier;	// 0x36a73a95
- (int)compare:(id)compare;	// 0x36a73b81
- (id)copyURLForURL:(id)url;	// 0x36a73bed
- (id)description;	// 0x36a73d09
@end
