//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface RMWebUsageController : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedController;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)_asynchronousProxyWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deleteAllWebHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteWebHistoryDuringInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteWebHistoryForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteWebHistoryForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

