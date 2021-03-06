/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray, SSURLBagContext, SSNetworkConstraints, NSSet;

@interface ISURLBag : NSObject {
	SSURLBagContext *_context;	// 4 = 0x4
	SSNetworkConstraints *_defaultConstraints;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_guidPatterns;	// 16 = 0x10
	NSSet *_guidSchemes;	// 20 = 0x14
	NSDictionary *_headerPatterns;	// 24 = 0x18
	double _invalidationTime;	// 28 = 0x1c
}
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x30f0b69d; S=0x30f0b659; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x30f0b6d5; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x30f0a795; 
@property(assign, nonatomic) double invalidationTime;	// G=0x30f0c399; S=0x30f0c3b1; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x30f0a8b5; 
+ (id)_copyFallbackContextForContext:(id)context;	// 0x30f0b70d
+ (void)_loadItemKindURLBagKeyMap;	// 0x30f0a48d
+ (id)_urlBagForContext:(id)context;	// 0x30f0a2fd
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x30f0b12d
+ (void)invalidateAllBags;	// 0x30f09fe9
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x30f0b1c9
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x30f0a0bd
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x30f0b265
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x30f0a6f5
+ (id)urlBagForContext:(id)context;	// 0x30f0a3bd
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x30f0b319
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x30f0b38d
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x30f0b441
- (id)init;	// 0x30f09855
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x30f0989d
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x30f09965
// declared property getter: - (id)URLBagContext;	// 0x30f0b69d
// declared property getter: - (id)URLBagDictionary;	// 0x30f0b6d5
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x30f0af11
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x30f0b755
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x30f0b8f5
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x30f0ba35
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x30f0bc0d
- (id)_networkConstraintsCachePath;	// 0x30f0be6d
- (void)_setDictionary:(id)dictionary;	// 0x30f0bf19
- (void)_writeNetworkConstraintsCacheFile;	// 0x30f0bfbd
- (void)_writeURLResolutionCacheFile;	// 0x30f0c175
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x30f0a795
- (id)copyExtraHeadersForURL:(id)url;	// 0x30f09b55
- (void)dealloc;	// 0x30f09ab9
- (void)invalidate;	// 0x30f0b4dd
// declared property getter: - (double)invalidationTime;	// 0x30f0c399
// declared property getter: - (BOOL)isValid;	// 0x30f0a8b5
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x30f09d75
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x30f0a905
- (id)sanitizedURLForURL:(id)url;	// 0x30f0b525
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x30f0a9d5
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x30f0c3b1
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x30f0b659
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x30f0ac0d
- (id)urlForKey:(id)key;	// 0x30f0ad9d
- (BOOL)urlIsTrusted:(id)trusted;	// 0x30f0ade9
- (id)valueForKey:(id)key;	// 0x30f0b10d
@end

