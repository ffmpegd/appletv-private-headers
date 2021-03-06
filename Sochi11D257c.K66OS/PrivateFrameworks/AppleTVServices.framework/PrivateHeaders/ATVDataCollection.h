/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "ATVDataBaseItem.h"
#import </libobjc.A.h>

@class NSMutableDictionary, ATVDataClient;

@interface ATVDataCollection : NSObject <ATVDataBaseItem> {
	NSMutableDictionary *_metadataDict;	// 4 = 0x4
	ATVDataClient *_dataClient;	// 8 = 0x8
}
@property(assign) __weak ATVDataClient *dataClient;	// G=0x3041041d; S=0x3041043d; @synthesize=_dataClient
@property(retain) NSMutableDictionary *metadataDict;	// G=0x304103f9; S=0x3041040d; @synthesize=_metadataDict
- (id)initWithDataClient:(id)dataClient;	// 0x304100c9
- (void).cxx_destruct;	// 0x30410451
- (id)concreteValueForProperty:(id)property;	// 0x304103f5
// declared property getter: - (id)dataClient;	// 0x3041041d
- (id)description;	// 0x30410261
- (unsigned)hash;	// 0x304101e9
- (BOOL)isDataItem;	// 0x304103f1
- (BOOL)isEqual:(id)equal;	// 0x30410121
// declared property getter: - (id)metadataDict;	// 0x304103f9
- (id)objectForKey:(id)key;	// 0x304103d1
- (id)objectForKeyedSubscript:(id)keyedSubscript;	// 0x304102f5
// declared property setter: - (void)setDataClient:(id)client;	// 0x3041043d
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0x3041040d
- (void)setObject:(id)object forKey:(id)key;	// 0x30410305
- (id)valueForProperty:(id)property;	// 0x30410291
@end

