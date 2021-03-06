//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IconServices/ISStoreServiceProtocol-Protocol.h>
#import <IconServices/NSXPCListenerDelegate-Protocol.h>

@class NSDictionary, NSString, NSURL, NSXPCListener;

__attribute__((visibility("hidden")))
@interface ISStoreService : NSObject <NSXPCListenerDelegate, ISStoreServiceProtocol>
{
    NSString *_serviceName;
    NSURL *_storeURL;
    NSXPCListener *_listener;
    NSDictionary *_configuration;
}

@property(readonly) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)removeAllData;
- (void)removeAllDataThrottled;
- (void)start;
- (void)initializeStoreDirectory;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 storeURL:(id)arg2;
- (void)addData:(id)arg1 withUUID:(id)arg2 domain:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchCachePathForDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

