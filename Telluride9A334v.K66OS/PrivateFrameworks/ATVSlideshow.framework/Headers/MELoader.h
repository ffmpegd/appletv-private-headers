/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MELoader : NSObject {
	NSMutableDictionary *_exporters;	// 4 = 0x4
	NSMutableDictionary *_exporterProperties;	// 8 = 0x8
}
- (id)init;	// 0x32ff2129
- (void)dealloc;	// 0x32ff216d
- (id)exporterIdentifierWithOptions:(id)options;	// 0x32ff2695
- (id)exporterIdentifiers;	// 0x32ff2675
- (id)exporterPropertyWithIdentifier:(id)identifier andKey:(id)key;	// 0x32ff2a19
- (id)exporterWithIdentifier:(id)identifier andDocument:(id)document andDelegate:(id)delegate;	// 0x32ff29a9
- (void)loadBuiltInPlugins;	// 0x32ff2281
- (void)loadEmbeddedPlugins;	// 0x32ff21cd
- (void)loadPluginAtPath:(id)path matchingIdentifier:(id)identifier;	// 0x32ff23bd
- (void)loadPluginWithIdentifier:(id)identifier;	// 0x32ff21ed
- (void)loadPluginsInFolder:(id)folder matchingIdentifier:(id)identifier;	// 0x32ff22f1
- (void)registerExporterClass:(Class)aClass withIdentifier:(id)identifier andProperties:(id)properties;	// 0x32ff2529
@end

