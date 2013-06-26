/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISStoreURLOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVBackgroundTask, ATVStoreEnvironment, ISURLBag, NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVStoreFront : XXUnknownSuperclass <ISStoreURLOperationDelegate> {
	ATVBackgroundTask *_bagReloadTask;	// 4 = 0x4
	BOOL _isStoreFrontChanging;	// 8 = 0x8
	BOOL _bagCanBeRefreshedByStoreServices;	// 9 = 0x9
	NSArray *_storeFronts;	// 12 = 0xc
	NSDictionary *_currentStoreFront;	// 16 = 0x10
	NSArray *_rootCollection;	// 20 = 0x14
	NSArray *_vendorBags;	// 24 = 0x18
	ISURLBag *_fallbackBag;	// 28 = 0x1c
	ATVStoreEnvironment *_environment;	// 32 = 0x20
	unsigned _loadBagRetryAttempt;	// 36 = 0x24
	unsigned _loadStoreFrontRetryAttempt;	// 40 = 0x28
	unsigned _loadAvailableStoreFrontRetryAttempt;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSDictionary *atvHeaders;	// G=0x1faa05; 
@property(readonly, assign, nonatomic) ISURLBag *bag;	// G=0x1fb095; @dynamic
@property(assign) BOOL bagCanBeRefreshedByStoreServices;	// G=0x1fc879; S=0x1fc891; @synthesize=_bagCanBeRefreshedByStoreServices
@property(readonly, assign, nonatomic) NSDictionary *commonHeaders;	// G=0x1fa6ed; 
@property(retain) NSDictionary *currentStoreFront;	// G=0x1fc781; S=0x1fc795; @synthesize=_currentStoreFront
@property(retain, nonatomic) ATVStoreEnvironment *environment;	// G=0x1fc841; S=0x1fc851; @synthesize=_environment
@property(retain) ISURLBag *fallbackBag;	// G=0x1fc7ed; S=0x1fc801; @synthesize=_fallbackBag
@property(assign) BOOL isChangingStoreFront;	// G=0x1fc811; S=0x1fc829; @synthesize=_isStoreFrontChanging
@property(assign) unsigned loadAvailableStoreFrontRetryAttempt;	// G=0x1fc901; S=0x1fc915; @synthesize=_loadAvailableStoreFrontRetryAttempt
@property(assign) unsigned loadBagRetryAttempt;	// G=0x1fc8a9; S=0x1fc8bd; @synthesize=_loadBagRetryAttempt
@property(assign) unsigned loadStoreFrontRetryAttempt;	// G=0x1fc8d5; S=0x1fc8e9; @synthesize=_loadStoreFrontRetryAttempt
@property(retain) NSArray *rootCollection;	// G=0x1fc7a5; S=0x1fc7b9; @synthesize=_rootCollection
@property(retain) NSArray *storeFronts;	// G=0x1fc75d; S=0x1fc771; @synthesize=_storeFronts
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersDictionary;	// G=0x1fa7c1; 
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersWithDsid;	// G=0x1fa885; 
@property(retain) NSArray *vendorBags;	// G=0x1fc7c9; S=0x1fc7dd; @synthesize=_vendorBags
+ (id)storeFront;	// 0x1fa3a1
- (id)init;	// 0x1fa459
- (void).cxx_destruct;	// 0x1fc92d
- (double)_BagReloadInterval;	// 0x1fcb49
- (id)_acceptLanguage;	// 0x1fc439
- (void)_accountStoreChanged:(id)changed;	// 0x1fb205
- (id)_bagContext;	// 0x1fb6f5
- (id)_init;	// 0x1fa4a9
- (void)_internetStateChanged:(id)changed;	// 0x1fb179
- (void)_languageChanged:(id)changed;	// 0x1fb251
- (void)_loadAvailableStoreFronts;	// 0x1fb801
- (void)_loadBag;	// 0x1fb291
- (void)_loadStoreFront;	// 0x1fbbf5
- (void)_processStoreFront:(id)front;	// 0x1fbf25
- (void)_retry:(unsigned)retry withSelector:(SEL)selector;	// 0x1fc351
- (void)_setCurrentStoreFront;	// 0x1fc17d
- (void)_sniffEnvironment:(id)environment;	// 0x1fc6b1
- (void)_storeFrontChanged:(id)changed;	// 0x1fb1b9
- (BOOL)_switchToStoreFront:(id)storeFront force:(BOOL)force;	// 0x1fac45
- (void)_updateDateAndTimeFromResponse:(id)response;	// 0x1fc4e1
- (void)_updateReloadTaskWithInterval:(double)interval;	// 0x1fc9c5
- (id)_userIdentifier;	// 0x1fb775
// declared property getter: - (id)atvHeaders;	// 0x1faa05
// declared property getter: - (id)bag;	// 0x1fb095
// declared property getter: - (BOOL)bagCanBeRefreshedByStoreServices;	// 0x1fc879
- (id)bagURLForKey:(id)key;	// 0x1fab09
- (id)bagValueForKey:(id)key;	// 0x1fab69
// declared property getter: - (id)commonHeaders;	// 0x1fa6ed
// declared property getter: - (id)currentStoreFront;	// 0x1fc781
- (void)dealloc;	// 0x1fa681
// declared property getter: - (id)environment;	// 0x1fc841
// declared property getter: - (id)fallbackBag;	// 0x1fc7ed
// declared property getter: - (BOOL)isChangingStoreFront;	// 0x1fc811
// declared property getter: - (unsigned)loadAvailableStoreFrontRetryAttempt;	// 0x1fc901
// declared property getter: - (unsigned)loadBagRetryAttempt;	// 0x1fc8a9
// declared property getter: - (unsigned)loadStoreFrontRetryAttempt;	// 0x1fc8d5
- (void)refreshURLBag;	// 0x1fabc9
// declared property getter: - (id)rootCollection;	// 0x1fc7a5
- (id)rootCollectionForMediaType:(id)mediaType;	// 0x1fae91
// declared property setter: - (void)setBagCanBeRefreshedByStoreServices:(BOOL)services;	// 0x1fc891
// declared property setter: - (void)setCurrentStoreFront:(id)front;	// 0x1fc795
// declared property setter: - (void)setEnvironment:(id)environment;	// 0x1fc851
// declared property setter: - (void)setFallbackBag:(id)bag;	// 0x1fc801
// declared property setter: - (void)setIsChangingStoreFront:(BOOL)front;	// 0x1fc829
// declared property setter: - (void)setLoadAvailableStoreFrontRetryAttempt:(unsigned)attempt;	// 0x1fc915
// declared property setter: - (void)setLoadBagRetryAttempt:(unsigned)attempt;	// 0x1fc8bd
// declared property setter: - (void)setLoadStoreFrontRetryAttempt:(unsigned)attempt;	// 0x1fc8e9
// declared property setter: - (void)setRootCollection:(id)collection;	// 0x1fc7b9
// declared property setter: - (void)setStoreFronts:(id)fronts;	// 0x1fc771
// declared property setter: - (void)setVendorBags:(id)bags;	// 0x1fc7dd
// declared property getter: - (id)storeFronts;	// 0x1fc75d
// declared property getter: - (id)storeHeadersDictionary;	// 0x1fa7c1
// declared property getter: - (id)storeHeadersWithDsid;	// 0x1fa885
- (BOOL)switchToStoreFront:(id)storeFront;	// 0x1fae79
// declared property getter: - (id)vendorBags;	// 0x1fc7c9
@end
