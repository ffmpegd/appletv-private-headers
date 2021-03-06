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
@property(readonly, assign) NSString *accountID;	// G=0x3412e051; @synthesize=_accountID
@property(readonly, assign) int dataclass;	// G=0x3412e065; @synthesize=_dataclass
- (id)initWithAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x3412de01
// declared property getter: - (id)accountID;	// 0x3412e051
- (id)copyWithZone:(NSZone *)zone;	// 0x3412df91
// declared property getter: - (int)dataclass;	// 0x3412e065
- (void)dealloc;	// 0x3412de65
- (id)description;	// 0x3412dfe5
- (unsigned)hash;	// 0x3412df59
- (BOOL)isEqual:(id)equal;	// 0x3412deb1
@end

