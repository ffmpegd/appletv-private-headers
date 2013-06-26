/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
	NSString *_accountID;	// 4 = 0x4
	int _dataclass;	// 8 = 0x8
}
@property(readonly, assign) NSString *accountID;	// G=0x33c52031; @synthesize=_accountID
@property(readonly, assign) int dataclass;	// G=0x33c52045; @synthesize=_dataclass
- (id)initWithAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x33c51de1
// declared property getter: - (id)accountID;	// 0x33c52031
- (id)copyWithZone:(NSZone *)zone;	// 0x33c51f71
// declared property getter: - (int)dataclass;	// 0x33c52045
- (void)dealloc;	// 0x33c51e45
- (id)description;	// 0x33c51fc5
- (unsigned)hash;	// 0x33c51f39
- (BOOL)isEqual:(id)equal;	// 0x33c51e91
@end
