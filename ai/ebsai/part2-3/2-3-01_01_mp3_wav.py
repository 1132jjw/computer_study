# Free mp3 file downloads
# https://file-examples.com/index.php/sample-audio-files/sample-mp3-download/
# pip install pydub
# error ffmpeg
# https://ffmpeg.zeranoe.com/builds/

#ffmpeg 설치 후 Path 환경변수에 ffmpeg/bin폴더 경로 추가 

import pydub
pydub.AudioSegment.converter = "C:\\Program Files\\ffmpeg\\bin\\ffmpeg.exe"

from pydub import AudioSegment
sound = AudioSegment.from_mp3("test_mp3.mp3")
sound.export("./test_mp3.wav", format="wav")
