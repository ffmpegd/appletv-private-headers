/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCloudQueryHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataClient, ML3MusicLibrary;

@protocol ATVCloudQueryHandler
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;
+ (id)mlPropertyForATVProperty:(id)atvproperty;
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;
- (void)handleQuery:(id)query withContext:(void *)context;
@end

__attribute__((visibility("hidden")))
@interface ATVCloudQueryHandler : XXUnknownSuperclass <ATVCloudQueryHandler> {
	ML3MusicLibrary *mlLibrary;	// 4 = 0x4
	ATVDataClient *cloudDataClient;	// 8 = 0x8
}
@property(retain, nonatomic) ATVDataClient *cloudDataClient;	// G=0xd56b1; S=0xd56c1; @synthesize
@property(retain, nonatomic) ML3MusicLibrary *mlLibrary;	// G=0xd5691; S=0xd56a1; @synthesize
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;	// 0xd5689
+ (id)mlPropertyForATVProperty:(id)atvproperty;	// 0xd568d
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;	// 0xd5685
- (id)initWithLibrary:(id)library cloudDataClient:(id)client;	// 0xd4af5
// declared property getter: - (id)cloudDataClient;	// 0xd56b1
- (void)dealloc;	// 0xd4b55
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xd5681
- (int)mlComparisonForATVOperator:(int)atvoperator;	// 0xd55f5
// declared property getter: - (id)mlLibrary;	// 0xd5691
- (unsigned long)mlMediaTypeForATVMediaType:(id)atvmediaType;	// 0xd5625
- (id)mlPropertiesForQuery:(id)query;	// 0xd54c5
- (id)predicateForCompoundFilter:(id)compoundFilter;	// 0xd52ed
- (id)predicateForFilter:(id)filter;	// 0xd4d19
- (id)predicateFromATVFilters:(id)atvfilters;	// 0xd4bad
- (id)predicateFromPredicates:(id)predicates withOperator:(int)anOperator;	// 0xd544d
// declared property setter: - (void)setCloudDataClient:(id)client;	// 0xd56c1
// declared property setter: - (void)setMlLibrary:(id)library;	// 0xd56a1
@end
