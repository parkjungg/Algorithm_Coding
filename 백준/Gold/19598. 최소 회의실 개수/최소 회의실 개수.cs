    public class Num19598
    {
        public static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            List<(int start, int end)> info = new List<(int, int)>();
            
            for (int i = 0; i < N; i++)
            {
                int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
                info.Add((nums[0], nums[1]));
            }

            // 시작 시간 기준 정렬
            info.Sort((a, b) => a.start.CompareTo(b.start));

            // 종료시간 기준 최소 힙처럼 사용
            PriorityQueue<int, int> pq = new PriorityQueue<int, int>();

            foreach (var (start, end) in info)
            {
                // 현재 회의 시작 시간 이후에 끝난 회의는 제거
                if (pq.Count > 0 && pq.Peek() <= start)
                {
                    pq.Dequeue();
                }

                pq.Enqueue(end, end);
            }

            Console.WriteLine(pq.Count); // 최소 회의실 개수
        }
    }
