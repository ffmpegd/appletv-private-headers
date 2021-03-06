/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVMultiStatusResponse.h"

@class NSMutableDictionary;

@interface DAVPropFindResponse : DAVMultiStatusResponse {
	NSMutableDictionary *categorizedProperties;	// 16 = 0x10
}
- (id)init;	// 0x314c98c1
- (id)_getPropertyForKey:(id)key;	// 0x314c9cd1
- (id)creationDate;	// 0x314c9831
- (void)dealloc;	// 0x314ca0b9
- (long long)getContentLength;	// 0x314ca325
- (id)getDisplayName;	// 0x314c9835
- (BOOL)handleResponseSubnode:(id)subnode;	// 0x314c9d49
- (BOOL)isCollection;	// 0x314c9839
- (BOOL)isFolder;	// 0x314c983d
- (id)properties;	// 0x314ca061
- (id)propertiesWithStatusCode:(int)statusCode;	// 0x314ca079
- (id)propertyForKey:(id)key;	// 0x314ca039
- (id)ressourceType;	// 0x314c9841
- (int)statusCodeForKey:(id)key;	// 0x314c9f9d
@end

