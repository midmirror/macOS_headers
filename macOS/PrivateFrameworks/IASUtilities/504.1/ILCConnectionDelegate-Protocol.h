//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class ILCConnection, NSArray, NSDictionary, NSError, NSString;

@protocol ILCConnectionDelegate
- (void)connectionDidEnd:(ILCConnection *)arg1;
- (void)connectionDidFail:(ILCConnection *)arg1 error:(NSError *)arg2;
- (void)connectionDidConnect:(ILCConnection *)arg1;
- (void)connectionDidStart:(ILCConnection *)arg1;

@optional
- (void)playAudioQueueWithOptionalString:(NSString *)arg1;
- (void)sysdiagnoseDidSucceedForFiles:(NSArray *)arg1;
- (void)sysdiagnoseDidFailForFiles:(NSArray *)arg1;
- (void)gatherSysdiagnoseDataWithHandles:(NSDictionary *)arg1;
- (NSArray *)sysdiganoseFilenames;
- (void)rebootMachine;
@end

